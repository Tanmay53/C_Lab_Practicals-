#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ab[30], key;
    int l, h;
    printf("Enter a String : \n");
    scanf("%s", ab);
    l = strlen(ab);
    printf("Length : %d\n", l);
    printf("Reverse String : ");
    for(h=0; h<=(l-1); h++) {
        printf("%c", ab[l-1-h]);
    }
    printf("\nEnter a character to search : ");
    scanf(" %c", &key);
    for(h=0; h<(l-1); h++) {
        if(ab[h] == key) {
            printf("The character is at %d index in the string.\n", h);
            break;
        }
    }
    return 0;
}
