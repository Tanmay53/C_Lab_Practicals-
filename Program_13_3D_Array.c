#include <stdio.h>
#include <stdlib.h>

int main()
{
    int defectCount, i, h;
    printf("Enter the number of Defects.\n");
    scanf("%d", &defectCount);
    char defects[defectCount][3][21];
    printf("Enter the Defects.\n");
    for(i=0; i<defectCount; i++) {
            printf("Defect %d\n", (i + 1));
            for(h=0; h<3; h++) {
                switch(h) {
                case 0:
                    printf("Book : ");
                    break;
                case 1:
                    printf("Chapter : ");
                    break;
                case 2:
                    printf("Page : ");
                    break;
                }
                scanf("%s", &defects[i][h]);
            }
    }
    return 0;
}
