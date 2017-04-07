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

void buildMinHeapList(Lista vett[], int dim){
    int i;
    for(i=dim/2; i>=0; i--)
        minHeapifyList(vett, i, dim);
}

void minHeapifyList(Lista vett[], int pos, int dim){
    int fsx, fdx, min;
    Lista temp;
    if(dim){
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
            minHeapifyList(vett, min, dim);
        }
    }
}

Lista insInLista(Lista *l, Lista *supp, Lista elem){
    if(!*l){
        *l=elem;
        *supp=elem;
        (*supp)->next=NULL;
    }
    else{
        (*supp)->next=elem;
        *supp=(*supp)->next;
        (*supp)->next=NULL;
    }
    return *l;
}

Lista fusione(Lista * v, int k){
    Lista finale, supp, temp;
    finale=supp=NULL;
    if(k)
        buildMinHeapList(v, k);
    while(k){
        if((*v)->next){
            temp=(*v)->next;
            insInLista(&finale, &supp, *v);
            *v=temp;
            minHeapifyList(v, 0, k);
        }
        else{
            insInLista(&finale, &supp, *v);
            if(k-1)
                *v=v[k-1];
            k--;
            minHeapifyList(v, 0, k);
        }
    }

    return finale;
}
