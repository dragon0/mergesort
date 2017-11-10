#include "header.h"
#include <iostream>

void printList(list* l){
    node* n = l->first;

    if(n != NULL){
        std::cout << n->data->value;
        n = n->next;

        while(n != NULL){
            std::cout << ", " << n->data->value;
            n = n->next;
        }
        std::cout << std::endl;

    }
}

