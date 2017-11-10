#include "header.h"

list* merge(list* left, list* right) {
    node* l = left->first;
    node* r = right->first;
    list* result = newList();

    while(l != NULL && r != NULL){
        if(l->data->value <= r->data->value){
            listAdd(result, newNode(result, l->data));
            l = l->next;
        }
        else{
            listAdd(result, newNode(result, r->data));
            r = r->next;
        }
    }

    while(l != NULL){
        listAdd(result, newNode(result, l->data));
        l = l->next;
    }
    while(r != NULL){
        listAdd(result, newNode(result, r->data));
        r = r->next;
    }

    return result;
}

