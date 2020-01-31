#include <stdio.h>
#include <stdlib.h>

int main()
{
    int city, days;
    int temp[2][7];
    char cityName[2][20];
    printf("Enter the name of two Cities.\n");
    scanf("%s %s", cityName[0], cityName[1]);
    for(city = 0; city<2; city++) {
        printf("Enter the temperature for %s in this Week.\n", cityName[city]);
        for(days = 0; days<7; days++) {
            printf("Day %d : ", (days + 1));
            scanf("%d", &temp[city][days]);
        }
    }
    printf("The temperatures in %s and %s for the week are :\n", cityName[0], cityName[1]);
    for(days=0; days<7; days++) {
        printf("|  %d  |  %d  |\n", temp[0][days], temp[1][days]);
    }
    return 0;
}
