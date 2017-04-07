#ifndef FUSIONE_H
#define FUSIONE_H

typedef struct elem{
    int val;
    struct elem * next;
} * Lista;

void printList(Lista l);

void printHead(Lista *list, int dim);

Lista fusione(Lista * v, int k);

#endif
