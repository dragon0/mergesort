#include "header.h"

void listDelete(list* l){
    node* n = l->first;
    while(n != NULL){
        node* d = n;
        n = n->next;
        delete d->data;
        delete d;
    }

    delete l;
}

