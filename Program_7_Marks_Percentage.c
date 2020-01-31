#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    float marks[5], sum = 0;
    float per;
    printf("Enter marks of 5 subjects:\n");
    for(h=0; h<5; h++) {
        scanf("%f", &marks[h]);
        sum += marks[h];
    }
    per = (sum / 500) * 100;
    printf("Your percentage is : %f", per);
    return 0;
}
