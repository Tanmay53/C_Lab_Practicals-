#include <stdio.h>
#include <stdlib.h>
typedef struct nodeBuild {
    int data;
    struct nodeBuild *next;
} node;
node *front, *rear;
void enqueue() {
    node *newNode;
    int newData;
    printf("Enter the new Element : ");
    scanf("%d", &newData);
    newNode = (node *)malloc(sizeof(node));
    newNode->data = newData;
    newNode->next = NULL;
    if(rear == NULL) {
        front = newNode;
    }
    else {
        rear->next = newNode;
    }
    rear = newNode;
}
void dequeue() {
    node *temp = front;
    if(front == NULL) {
        printf("The Queue is Empty.\n");
    }
    else {
        if(front->next == NULL) {
            rear = NULL;
        }
        front = front->next;
        free(temp);
        printf("First Element Dequeued Successfully.\n");
    }
}
void display() {
    node *temp = front;
    if(temp == NULL) {
        printf("The Queue is Empty.\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf(" %d \n", temp->data);
            temp = temp->next;
        }
    }
}
void terminate() {
    exit(0);
}
int main()
{
    front = NULL;
    rear = NULL;
    void (*funcHolder[4])() = {terminate, enqueue, dequeue, display};
    int command;
    while(1)
    { 
        printf("Press : \n 1 => Enqueue an element. \n 2 => Dequeue the first element in Queue. \n 3 => Display the Queue \n 0 => Exit \n");
        scanf("%d", &command);
        switch(command) {
            case 1:
            case 2:
            case 3:
            case 0:
                (*funcHolder[command])();
                break;
            default:
                printf("Plese use the above commands to manipulate the Queue.");
        }
    }
    return(0);
}