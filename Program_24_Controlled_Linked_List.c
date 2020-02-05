#include <stdio.h>
#include <stdlib.h>
typedef struct node1 {
    int data;
    struct node1 *next;
} node;
void push(node **head_ref, int newData) {
    node * newNode = NULL;
    newNode = (node*)malloc(sizeof(node));
    newNode->data = newData;
    newNode->next = (*head_ref);
    (*head_ref)=newNode;
}
void displayList(node *h) {
    while(h != NULL) {
        printf("  %d\n", h->data);
        h = h->next;
    }
}
void deleteNode(node **head_ref, int key) {
    node *temp = *head_ref, *prev;
    if(temp!=NULL) {
        if(temp->data == key) {
            (*head_ref) = temp->next;
            free(temp);
        }
        else {
            while(temp->data != key) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            free(temp);
        }
    }
}
void menuExecute(node **head_ref) {
    int order, data;
    printf("Controls : \n 0 -> exit \n 1 -> Push Element in Linked List. \n 2 -> Display List \n 3 -> Delete Element\n");
    scanf("%d", &order);
    if(order != 0) {
        switch(order) {
        case 1:
            printf("Enter the data to push.\n");
            scanf("%d", &data);
            push(head_ref, data);
            break;
        case 2:
            displayList(*head_ref);
            break;
        case 3:
            printf("Enter the element to be deleted.\n");
            scanf("%d", &data);
            deleteNode(head_ref, data);
            break;
        default:
            printf("Invalid input, Please try again.\n");
        }
        menuExecute(head_ref);
    }
}
int main()
{
    node *head = NULL;
    printf("Linked List Manager. \n");
    menuExecute(&head);
    return 0;
}
