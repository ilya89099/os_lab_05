#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

#include "lib_interface.h"

int main() {
    void* ptr = dlopen("libmy_list.so", RTLD_NOW);
    if(!ptr) {
        printf("%s", dlerror());
        exit(1);
    }
    void (*init)(list*) = dlsym(ptr, "list_init");
    void (*clear)(list*) = dlsym(ptr, "list_clear");
    void (*destroy)(list*) = dlsym(ptr, "list_destroy");

    list_iterator (*begin)(list*) = dlsym(ptr, "list_begin");
    list_iterator (*end)(list*) = dlsym(ptr, "list_end");

    list_iterator (*iter_next)(list_iterator) = dlsym(ptr,"list_iter_next");
    list_iterator (*iter_prev)(list_iterator) = dlsym(ptr,"list_iter_prev");

    void (*insert)(list_iterator, VALUE_TYPE) = dlsym(ptr, "list_insert");
    void (*erase)(list_iterator) = dlsym(ptr, "list_erase");
    void (*print)(list*) = dlsym(ptr, "list_print");

    md5 (*hash)(unsigned long long, unsigned long long) = dlsym(ptr, "make_hash");
    void* pointers[9] = {init,clear,begin,end,iter_next,iter_prev,insert,erase,print};
    for (int i = 0; i < 9; ++i) {
        if (!pointers[i]) {
            printf("function is not loaded correctly\n");
            exit(1);
        }
    }
    list l;
    init(&l);
    insert(begin(&l), hash(10,10));
    insert(begin(&l), hash(20,10));
    insert(begin(&l), hash(30,10));
    insert(begin(&l), hash(40,10));
    insert(begin(&l), hash(50,10));
    erase(iter_prev(end(&l)));
    print(&l);

    dlclose(ptr);
}
