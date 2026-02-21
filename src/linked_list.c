#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    Element element;
    struct Node* next;
} Node;

struct  Linkedlist{
    Node* head;
    size_t size;
};

Linkedlist* list_create(void){
    Linkedlist* list = malloc(sizeof(Linkedlist));

    list->head = NULL;
    list->size = 0;

    return list;
}

void list_destroy(Linkedlist* list){
    Node* trash = list -> head;

    while (trash!= NULL){
        list->head = trash->next;

        free(trash);
        trash = list->head;
    }
    free(list);
}

//Inserir na cabeça (como se fosse uma pilha)
void linst_insert_first(Linkedlist* list, Element element){
    Node* new_node = malloc(sizeof(Node));

    new_node->element = element;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}

void list_print(Linkedlist* list){
    Node* cur = list->head;

    while (cur != NULL){
        element_print(cur->element);
        cur = cur->next;
    }
    printf("\n");
}
