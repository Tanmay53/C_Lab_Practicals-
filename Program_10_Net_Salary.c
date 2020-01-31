#include <stdio.h>
#include <stdlib.h>
float DA(float);
float TA(float);
float HRA(float);
void net(float, float, float, float);
int main()
{
    float salary;
    printf("Enter your salary : \n");
    scanf("%f", &salary);
    net(salary, DA(salary), TA(salary), HRA(salary));
    return 0;
}
float DA(float sal) {
    return(sal * 15 / 100);
}
float TA(float sal) {
    return(sal * 10 / 100);
}
float HRA(float sal) {
    return(sal * 40 / 100);
}
void net(float sal, float da, float ta, float hra) {
    float netSal = sal + da + ta + hra;
    printf("Your net salary is : %f", netSal);
}
