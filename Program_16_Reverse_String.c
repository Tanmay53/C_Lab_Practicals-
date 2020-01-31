#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char name[21];
    printf("Enter a String:\n");
    gets(name);
    int a;
    for(a=(strlen(name)-1); a>=0; a--) {
        printf("%c", name[a]);
    }
    return 0;
}
