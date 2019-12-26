#include <stdio.h>

#include "lib_interface.h"

int main() {
    list l1;
    list_init(&l1);
    list_insert(list_begin(&l1), make_hash(10,10));
    list_insert(list_begin(&l1), make_hash(20,20));
    list_insert(list_begin(&l1), make_hash(30,30));
    list_insert(list_begin(&l1), make_hash(40,40));
    list_insert(list_begin(&l1), make_hash(50,50));
    list_print(&l1);


}