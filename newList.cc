#include "header.h"

list* newList() {
    list* l = new list;
    l->length = 0;
    l->first = NULL;
    l->last = NULL;
    return l;
}

