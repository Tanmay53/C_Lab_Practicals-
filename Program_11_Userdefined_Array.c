#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, index;
    printf("Enter the number of inputs.\n");
    scanf("%d", &size);
    int data[size];
    printf("Enter the elements.\n");
    for(i=0; i<size; i++) {
        scanf("%d", &data[i]);
    }
    printf("Enter the index of the element to be displayed : ");
    scanf("%d", &index);
    printf("The Element is : %d", data[index]);
    return 0;
}
