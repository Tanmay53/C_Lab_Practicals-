#include <stdio.h>
#include <stdlib.h>
typedef struct nodes {
    int data;
    struct node *next;
} node;
int main()
{
    node *head=NULL, *second=NULL, *last=NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));

    head->data=500;
    second->data=2000;
    last->data=200;

    head->next=second;
    second->next=last;
    last->next=NULL;

    node *n=head;
    while(n!=NULL) {
        printf( "%d \n", n->data);
        n=n->next;
    }
    return 0;
}
