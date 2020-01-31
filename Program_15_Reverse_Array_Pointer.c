//Reversing a Pointer Arrau
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[6], i;
    int (*ptr)[6] = &values;
    printf("Enter the Values:\n");
    for(i=0; i<6; i++) {
        scanf("%d", &(*ptr)[i]);
    }
    printf("The Reverse Order is :\n");
    for(i=5; i>=0; i--) {
        printf("%d\n", (*ptr)[i]);
    }
    return 0;
}
