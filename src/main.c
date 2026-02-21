#include <stdio.h>
#include "linked_list.h"

int main(void){
    Linkedlist* list = list_create();

    for(int i = 0; i<10; i++){
        linst_insert_first(list, i+1);
    }

    list_print(list);

    list_destroy(list);

    return 0;
}