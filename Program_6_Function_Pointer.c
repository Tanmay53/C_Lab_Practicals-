#include <stdio.h>
#include <stdlib.h>
int product(int, int);
int main()
{
    int x, y;
    int (*ptr)(int, int) = &product;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    printf("The product is : %d", (*ptr)(x, y));
    return 0;
}
int product(int a, int b) {
    return(a*b);
}
