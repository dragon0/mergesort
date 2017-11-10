#include "header.h"

void listAdd(list* l, node* n) {
    if(l->length == 0){
        l->first = l->last = n;
        l->length = 1;
    }
    else{
        n->prev = l->last;
        l->last->next = n;
        l->last = n;
        l->length++;
    }
}

