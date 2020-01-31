#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp[10];
    int *p = &temp;
    scanf("%d", p);
    printf("The temperature is : \n");
    printf("%d \n", *p);
    return 0;
}
