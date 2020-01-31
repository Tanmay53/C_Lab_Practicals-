#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ab[30], s, l, h;
    printf("Enter a String : \n");
    scanf("%s", &ab);
    s = sizeof(ab);
    printf("Size : %d\n", sizeof(ab));
    l = strlen(ab);
    printf("Length : %d\n", l);
    printf("Reverse String : ");
    for(h=0; h<=(l-1); h++) {
        printf("%c", ab[l-1-h]);
    }
    return 0;
}
