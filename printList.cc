#include "header.h"
#include <iostream>

void printList(list* l){
    node* n = l->first;

    if(n != NULL){
        std::cout << n->data->value;

        while((n = n->next) != NULL){
            std::cout << ", " << n->data->value;
        }
        std::cout << std::endl;

    }
}

