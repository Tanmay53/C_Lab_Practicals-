#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[30], str2[30];
    int h;
    printf("Enter First String:\n");
    gets(str1);
    printf("Enter Second String:\n");
    gets(str2);
    strcat(str1, str2);
    printf("Combined String is : %s", str1);
    return 0;
}
