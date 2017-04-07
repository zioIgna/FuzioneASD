#include <stdio.h>
#include <stdlib.h>

typedef struct elem{
    int val;
    struct elem * next;
} * Lista;

int main()
{
    int i;
    Lista l1, l2, l3, l4, temp;
    l1=l2=l3=l4=temp=NULL;
    /*l1*/
    Lista newEl=(Lista)malloc(sizeof(struct elem));
    newEl->next=NULL;
    newEl->val=-1;
    l1=newEl;
    for(i=0; i<5; i++){
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
    newEl->val=-1;
    l2=newEl;
    for(i=0; i<5; i++){
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
    newEl->val=-1;
    l3=newEl;
    for(i=0; i<5; i++){
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
    printList(l1);
    printf("\n");
    printList(l2);
    printf("\n");
    printList(l3);

    return 0;
}
