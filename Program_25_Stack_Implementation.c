#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top, *temp;
void push(int newData)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = newData;
    temp->next = top;
    top = temp;
}
void pop()
{
    temp = top;
    if(top == NULL)
    {
        printf("The stack is Empty");
    }
    else
    {
        top = top->next;
        free(temp);
    }
}
void peep()
{
    if(top != NULL)
    {
        printf("%d \n", top->data);
    }
    else
    {
        printf("The stack is Empty");
    }
}
void display()
{
    temp = top;
    while(temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    top = NULL;
    char instructions[] = " 0 => Push data into the Stack.\n 1 => Delete the topmost element in the stack.\n 2 => Display the topmost element in the stack.\n 3 => Display all elements in the stack.\n 4 => exit.\n";
    int input, iData, execute=1;
    while(execute == 1)
    {
        printf("%s", instructions);
        scanf("%d", &input);
        switch(input)
        {
        case 0:
            printf("Enter the data:");
            scanf("%d", &iData);
            push(iData);
            break;
        case 1:
            pop();
            break;
        case 2:
            peep();
            break;
        case 3:
            display();
            break;
        case 4:
            execute = 0;
            break;
        }
    }
    return 0;
}
