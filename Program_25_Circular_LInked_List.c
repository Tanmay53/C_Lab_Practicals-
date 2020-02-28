#include <stdio.h>
#include <stdlib.h>

typedef struct nodeBody {
    int data;
    struct nodeBody * next;
} node;
node *head;

void push(int newData) {
    node *newNode, *temp;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = newData;
    if(head == NULL) {
        newNode->next = newNode;
    }
    else {
        newNode->next = head;
        temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    head = newNode;
}
void display() {
    node *temp = head;
    if(head == NULL) {
        printf("No Element in the list.");
    }
    else {
        do {
            printf(" %d \n", temp->data);
            temp = temp->next;
        } while(temp != head);
    }
}
void deleteNode(int key) {
    node *temp = head, *prev;
    if(head->data == key) {
        while(temp->next != head) {
            temp = temp->next;
        }
        if(temp->next == head->next) {
            free(head);
            head = NULL;
        }
        else {
            temp->next = head->next;
            free(head);
            head = temp->next;
        }
    }
    else {
        do {
            prev = temp;
            temp = temp->next;
        } while(temp->data != key);
        prev->next = temp->next;
        free(temp);
    }
    printf("Element Deleted Successfuly.\n");
}
int main()
{
    head = NULL;
    int command, element;
    while(1) {
        printf("Press: \n 1 => Push Element \n 2 => Display Element \n 3 => Delete an Element \n 0 => Exit \n");
        scanf("%d", &command);
        switch(command) {
            case 1:
                printf("Enter the Element : ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                printf("The Elements in the List are : \n");
                display();
                break;
            case 3:
                printf("Enter the element to be deleted : ");
                scanf("%d", &element);
                deleteNode(element);
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Please enter a valid Input.");
        }
    }
    return 0;
}