#include "header.h"

list* mergeSort(list* l){
    if(l->length <= 1){
        return l;
    }

    list* left = newList();
    list* right = newList();

    {
        node* n = l->first;
        int i = 0;
        while(n != NULL){
            if(i < l->length/2){
                listAdd(left, newNode(left, n->data));
            }
            else{
                listAdd(right, newNode(right, n->data));
            }
            n = n->next;
            i++;
        }
    }

    left = mergeSort(left);
    right = mergeSort(right);
    list* result = merge(left, right);
    listDeleteSoft(left);
    listDeleteSoft(right);
    listDeleteSoft(l);
    return result;
}

