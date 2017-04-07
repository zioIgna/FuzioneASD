#ifndef FUSIONE_H
#define FUSIONE_H

typedef struct elem{
    int val;
    struct elem * next;
} * Lista;

void buildMinHeapList(Lista vett[], int dim);

void minHeapifyList(Lista vett[], int pos, int dim);

void buildMinHeap(int vett[], int dim);

void minHeapify(int vett[], int pos, int dim);

void printList(Lista l);

void printHead(Lista *list, int dim);

Lista insInLista(Lista *l, Lista *supp, Lista elem);

Lista fusione(Lista * v, int k);

#endif
