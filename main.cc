#include "header.h"

int main(){
    int vals[] = {958, 257, 186, 164, 947, 341, 235, 320, 903, 632, 374};
    list* l = newList();

    for(int v: vals){
        listAdd(l, newNode(l, newRecord(v)));
    }

    printList(l);

    l = mergeSort(l);

    printList(l);

    listDelete(l);

    return 0;
}

