#include <stdio.h>
#include <stdlib.h>

typedef struct node1 {
    int data;
    struct node1 *next;
}node;
void push(node **Head_Ref, int newData) {
    node *newNode;
    newNode = (node*)malloc(sizeof(node));
    newNode->data = newData;
    newNode->next = (*Head_Ref);
    (*Head_Ref)=newNode;
}
void Display(node *n)
{
    while(n!=NULL)
    {
        printf("%d", n->data);
        n=n->next;
    }
}
int main()
{
    node *head=NULL;
    push(&head, 10);
    Display(head);
    return 0;
}
