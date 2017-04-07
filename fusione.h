#ifndef FUSIONE_H
#define FUSIONE_H

typedef struct elem{
    int val;
    struct elem * next;
} * Lista;

Lista fusione(Lista * v, int k);

#endif
