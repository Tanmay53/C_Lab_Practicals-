#include<stdio.h>
#include<stdlib.h>
typedef struct node1 {
    int data;
    struct node1 *next;
} node;
node* createNode() {
    node *n = NULL;
    n = (node*)malloc(sizeof(node));
    scanf("%d", &n->data);
    n->next = NULL;
    return n;
}
node* createList(int size) {
    int i;
    node* adKeeper[size];
    printf("Enter the List data : \n");
    for(i=0; i<size; i++) {
        adKeeper[i]=createNode();
        if(i != 0) {
            adKeeper[i-1]->next = adKeeper[i];
        }
    }
    return adKeeper[0];
}
void displayList(node *m) {
    while(m != NULL) {
        printf("  %d\n", m->data);
        m = m->next;
    }
}
int main() {
    node *head = NULL;
    int length;
    printf("Enter the length of the List : ");
    scanf("%d", &length);
    head = createList(length);
    printf("The values in the List are : \n");
    displayList(head);
}