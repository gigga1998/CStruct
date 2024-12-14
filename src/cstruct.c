#include <stdlib.h>
#include <stdio.h>

#include "../include/cstruct.h"


iConList iConlist_init(int num) {
    iConList new_iConList = malloc(sizeof(iconList));
    new_iConList -> elem = num;
    new_iConList -> next = NULL;
    return new_iConList;
}

void iConlist_append(iConList list, int num) {
    iConList current_elem = list;
    while(current_elem -> next != NULL) {
        current_elem = current_elem -> next;
    }
    iConList new_element = iConlist_init(num);
    current_elem -> next = new_element;
}

void iConlist_print(iConList list, char* delim) {
    iConList current_elem = list;
    while (current_elem -> next != NULL) {
        printf("%d%s", current_elem -> elem, delim);
        current_elem = current_elem -> next;
    }
    printf("%d\n", current_elem -> elem);
}
