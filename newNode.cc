#include "header.h"

node* newNode(list* l, record* r){
    node* n = new node;
    n->data = r;
    n->head = l;
    n->next = NULL;
    n->prev = NULL;
    return n;
}

