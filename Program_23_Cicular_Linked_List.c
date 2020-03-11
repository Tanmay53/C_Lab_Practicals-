#include<stdio.h>
#include<stdlib.h>
//The previous of first will be connected to last
//The next of last will be connected to first
typedef struct node1 {
    struct node1 *prev;
    int data;
    struct node1 *next;
} node;
int main() {
    
    node *first = NULL;
    node *second = NULL;
    node *third = NULL;

    first = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->prev = third;
    second->prev = first;
    third->prev = second;

    first->next = second;
    second->next = third;
    third->next = first;    
}