#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mat1[2][2], mat2[2][2], sum[2][2];
    int h, i;
    printf("Enter first matrix :\n");
    for(h=0; h<2; h++) {
        scanf("%f %f", &mat1[h][0], &mat1[h][1]);
    }
    printf("Enter second matrix : \n");
    for(h=0; h<2; h++) {
        scanf("%f %f", &mat2[h][0], &mat2[h][1]);
    }
    printf("The sum of Matrices is : \n");
    for(h=0; h<2; h++) {
        for(i=0; i<2; i++) {
            sum[h][i] = mat1[h][i] + mat2[h][i];
            printf("%f ", sum[h][i]);
        }
        printf("\n");
    }
    return 0;
}
