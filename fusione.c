#include <stdio.h>
#include <stdlib.h>
#include "fusione.h"

void printList(Lista l){
    if(l){
        printf("%d ", l->val);
        printList(l->next);
    }
}

Lista fusione(Lista * v, int k){
    return NULL;
}
