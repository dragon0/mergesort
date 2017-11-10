#ifndef HEADER_H
#define HEADER_H
#include<cstddef>

struct node;
struct list;
struct record;

struct list {
    int length;
    node* first;
    node* last;
};

struct node {
    list* head;
    node* next;
    node* prev;
    record* data;
};

struct record {
    int value;
};

list* newList();
node* newNode(list*, record*);
record* newRecord(int);
void listAdd(list*, node*);
void listDelete(list*);
void listDeleteSoft(list*);
void printList(list*);

list* mergeSort(list*);
list* merge(list*, list*);

#endif

