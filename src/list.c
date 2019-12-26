#include "list.h"

void list_init(list* l) {
    l->after_end = malloc(sizeof(list_node));
    l->begin = l->after_end;
    l->begin->prev = NULL;
}

void list_print(list* l) {
    list_iterator it = list_begin(l);
    while (!list_iter_equal(it, list_end(l))) {
        char* str = hash_to_string(*list_iter_get(it));
        printf("%s ", str);
        free(str);
        it = list_iter_next(it);
    }
    printf("\n");
}

void list_clear(list* l) {
    while (l->begin != l->after_end) {
        list_node* temp = l->begin;
        l->begin = l->begin->next;
        free(temp);
    }
}

void list_destroy(list* l) {
    list_clear(l);
    free(l->after_end);
    l->begin = NULL;
    l->after_end = NULL;
}

list_iterator list_begin(list* l) {
    return list_make_iter(l->begin, l);
}

list_iterator list_end(list* l) {
    return list_make_iter(l->after_end, l);
}

list_iterator list_iter_next(list_iterator it) {
    return list_make_iter(it.node->next, it.list);
}

list_iterator list_iter_prev(list_iterator it) {
    return list_make_iter(it.node->prev, it.list);
}

list_iterator list_make_iter(list_node* node, list* list) {
    return (list_iterator){.node = node, .list = list};
}

bool list_iter_equal(list_iterator lhs, list_iterator rhs) {
    return lhs.list == rhs.list && rhs.node == lhs.node;
}

VALUE_TYPE* list_iter_get(list_iterator it) {
    return &it.node->data;
}

void list_insert(list_iterator it, VALUE_TYPE val) {
    list_node* node = it.node;
    list_node* new_node = malloc(sizeof(list_node));
    new_node->data = val;
    if (node->prev == NULL) { // вставка в начало
        node->prev = new_node;
        new_node->next = node;
        new_node->prev = NULL;
        it.list->begin = new_node;
        return;
    }
    new_node->prev = node->prev;
    new_node->next = node;
    node->prev->next = new_node;
    node->prev = new_node;
}

void list_erase(list_iterator it) {
    if (it.node == it.list->after_end) {
        return;
    }
    if (it.node->prev == NULL) {
        it.node->next->prev = NULL;
        it.list->begin = it.node->next;
        free(it.node);
        return;
    }
    list_node* temp = it.node;
    it.node->prev->next = it.node->next;
    it.node->next->prev = it.node->prev;
    free(temp);
}

bool list_empty(list* l) {
    return l->begin == l->after_end;
}

size_t list_size(list* l) {
    size_t size = 0;
    list_node* node = l->begin;
    while (node != l->after_end) {
        size++;
        node = node->next;
    }
    return size;
}