#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct BCA {
        char name[21];
        int rollNo;
        int height;
        int weight;
    };
    struct BCA student;
    printf("Enter Student Name:");
    gets(&student.name);
    printf("Enter Roll No.:");
    scanf("%d", &student.rollNo);
    printf("Enter Height:");
    scanf("%d", &student.height);
    printf("Enter Weight:");
    scanf("%d", &student.weight);
    printf("---------------------------------\n");
    printf("Name : %s\n", student.name);
    printf("Roll No : %d\n", student.rollNo);
    printf("Height : %d\n", student.height);
    printf("Weight : %d\n", student.weight);
    return 0;
}
