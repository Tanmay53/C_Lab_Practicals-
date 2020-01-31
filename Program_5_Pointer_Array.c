#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5], i;
    int (*p)[5] = &arr;
    printf("Enter Array Elements:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &(*p)[i]);
    }
    printf("The Elements are:\n");
    for(i=0; i<5; i++) {
        printf("%d\n", (*p)[i]);
    }
    return 0;
}
