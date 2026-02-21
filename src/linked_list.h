#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "element.h"

typedef struct Linkedlist Linkedlist;

Linkedlist* list_create(void);
void list_destroy(Linkedlist* list);
void linst_insert_first(Linkedlist* list, Element element);
void list_print(Linkedlist* list);


#endif