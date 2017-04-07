#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
    int val;
    struct elem * next;
} * Lista;

int main()
{
    int i;
    int intVett[5]={4, 2, 7, 16, 2};
    Lista vett[4];
    Lista l1, l2, l3, l4, temp, finale;
    l1=l2=l3=l4=temp=finale=NULL;

    /*l1*/
    Lista newEl=(Lista)malloc(sizeof(struct elem));
    newEl->next=NULL;
    newEl->val=-1;
    l1=newEl;
    for(i=1; i<6; i++){
        temp=l1;
        if(temp){
            while(temp->next){
                temp=temp->next;
            }
        }

        Lista newEl=(Lista)malloc(sizeof(struct elem));
        newEl->val=i*1;
        newEl->next=NULL;
        temp->next=newEl;
    }
    /*l2*/
    newEl=(Lista)malloc(sizeof(struct elem));
    newEl->next=NULL;
    newEl->val=-2;
    l2=newEl;
    for(i=1; i<6; i++){
        temp=l2;
        if(temp){
            while(temp->next){
                temp=temp->next;
            }
        }

        newEl=(Lista)malloc(sizeof(struct elem));
        newEl->val=i*10;
        newEl->next=NULL;
        temp->next=newEl;
    }

    /*l3*/
    newEl=(Lista)malloc(sizeof(struct elem));
    newEl->next=NULL;
    newEl->val=-3;
    l3=newEl;
    for(i=1; i<6; i++){
        temp=l3;
        if(temp){
            while(temp->next){
                temp=temp->next;
            }
        }

        newEl=(Lista)malloc(sizeof(struct elem));
        newEl->val=i*100;
        newEl->next=NULL;
        temp->next=newEl;
    }
    /*l4*/
    newEl=(Lista)malloc(sizeof(struct elem));
    newEl->next=NULL;
    newEl->val=-4;
    l4=newEl;
    for(i=1; i<6; i++){
        temp=l4;
        if(temp){
            while(temp->next){
                temp=temp->next;
            }
        }

        newEl=(Lista)malloc(sizeof(struct elem));
        newEl->val=i*1000;
        newEl->next=NULL;
        temp->next=newEl;
    }

    printList(l1);
    printf("\n");
    printList(l2);
    printf("\n");
    printList(l3);
    printf("\n");
    printList(l4);
    printf("\n");

    vett[0]=l1;
    vett[1]=l2;
    vett[2]=l3;
    vett[3]=l4;
    printHead(vett, 4);
    printf("\n");

    for(i=0; i<5; i++)
        printf("%d ",intVett[i]);
    printf("\n");
    buildMinHeap(intVett, 5);
    for(i=0; i<5; i++)
        printf("%d ",intVett[i]);
    printf("\n");
//    buildMinHeapList(vett, 4);
//    printf("ora stampo le teste delle liste dopo l'heap\n");
//    printHead(vett, 4);
    finale=fusione(vett, 4);
    printList(finale);
    printf("\n");

    return 0;
}
