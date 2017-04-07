#include <stdio.h>
#include <stdlib.h>
#include "fusione.h"

void printList(Lista l){
    if(l){
        printf("%d ", l->val);
        printList(l->next);
    }
}

void printHead(Lista *list, int dim){
    int i;
    for(i=0; i<dim; i++)
        printf("%d ", list[i]->val);
}

Lista fusione(Lista * v, int k){
    return NULL;
}
