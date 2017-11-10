#include "header.h"

void listDeleteSoft(list* l){
    node* n = l->first;
    while(n != NULL){
        node* d = n;
        n = n->next;
        delete d;
    }

    delete l;
}


