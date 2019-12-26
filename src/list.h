#ifndef LIB_TEST_LIST_H
#define LIB_TEST_LIST_H

#include <stdbool.h>
#include <glob.h>
#include <stdlib.h>
#include <stdio.h>
#include "MD5.h"

#define VALUE_TYPE md5

typedef struct ListNode {
    VALUE_TYPE data;
    struct ListNode* next;
    struct ListNode* prev;
} list_node;

typedef struct List {
    struct ListNode* begin;
    struct ListNode* after_end;
} list;

typedef struct ListIterator {
    struct ListNode* node;
    struct List* list;
} list_iterator;

void list_init(list* l);
void list_clear(list* l);
void list_destroy(list* l);

list_iterator list_begin(list* l);
list_iterator list_end(list* l);

list_iterator list_iter_next(list_iterator it);
list_iterator list_iter_prev(list_iterator it);

list_iterator list_make_iter(list_node* node, list* list);
bool list_iter_equal(list_iterator lhs, list_iterator rhs);
VALUE_TYPE* list_iter_get(list_iterator it);

void list_insert(list_iterator it, VALUE_TYPE val);
void list_erase(list_iterator it);
void list_print(list* l);

bool list_empty(list* l);
size_t list_size(list* l);

#endif //LIB_TEST_LIST_H
