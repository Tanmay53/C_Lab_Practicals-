#include <stdio.h>
#include <stdlib.h>
typedef struct dll {
    int data;
    struct dll *next;
    struct dll *prev;
} node;
int main()
{
    node *head=NULL;
    node *second=NULL;
    node *last=NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));

    head->data=10;
    head->next=second;
    head->prev=NULL;

    second->data=20;
    second->next=last;
    second->prev=head;

    last->data=30;
    last->next=NULL;
    last->prev=second;

    return 0;
}
