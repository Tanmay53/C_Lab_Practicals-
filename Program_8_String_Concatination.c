#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];
    int len;
    printf("Enter First String:\n");
    scanf("%s", str1);
    printf("Enter Second String:\n");
    scanf("%s", str2);
    strcat(str1, str2);
    len = strlen(str1);
    printf("Combined String %s is %d in length.", str1, len);
    return 0;
}
