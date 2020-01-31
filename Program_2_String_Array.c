#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Enter the number of strings to enter.\n");
    scanf("%d", &num);
    char stu[num][21];
    printf("Enter the strings.\n");
    for(i=0; i<num; i++) {
        scanf("%s", stu[i]);
    }
    printf("The strings are :\n");
    for(i=0; i<num; i++) {
        printf("%s \n", stu[i]);
    }
    return 0;
}
