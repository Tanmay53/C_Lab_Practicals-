#include <stdio.h>
#include <stdlib.h>
int add(int, int);
int main()
{
    int a, b, sum;
    printf("Enter two numbers.\n");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("The sum is : %d", sum);
    return 0;
}
int add(int a, int b) {
    return(a + b);
}
