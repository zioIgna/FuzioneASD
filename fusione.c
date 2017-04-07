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

void buildMinHeap(int vett[], int dim){
    int i;
    for(i=dim/2; i>=0; i--)
        minHeapify(vett, i, dim);
}

void minHeapify(int vett[], int pos, int dim){
    int fsx, fdx, min, temp;
    fsx=pos*2+1;
    fdx=pos*2+2;
    if(fsx<dim && vett[fsx]<vett[pos])
        min=fsx;
    else
        min=pos;
    if(fdx<dim && vett[fdx]<vett[min])
        min=fdx;
    if(pos!=min){
        temp=vett[pos];
        vett[pos]=vett[min];
        vett[min]=temp;
        minHeapify(vett, min, dim);
    }
}

void buildMinHeapList(Lista vett[], int pos, int dim){
    int i;
    for(i=dim/2; i>=0; i--)
        minHeapifyList(vett, i, dim);
}

void minHeapifyList(Lista vett[], int pos, int dim){
    int fsx, fdx, min;
    Lista temp;
    fsx=pos*2+1;
    fdx=pos*2+2;
    if(fsx<dim && vett[fsx]->val<vett[pos]->val)
        min=fsx;
    else
        min=pos;
    if(fdx<dim && vett[fdx]->val<vett[min]->val)
        min=fdx;
    if(pos!=min){
        temp=vett[pos];
        vett[pos]=vett[min];
        vett[min]=temp;
        minHeapify(vett, min, dim);
    }
}

Lista fusione(Lista * v, int k){
    return NULL;
}
