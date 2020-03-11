#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fp = NULL;
char file[100];

void create()
{
    if(fp != NULL)
    {
        fclose(fp);
    }
    char fName[100];
    printf("Enter the File Name : ");
    scanf("%s", fName);
    fp = fopen(fName, "w+");
    strcpy(file, fName);
    printf("The current open file is %s.\n", fName);
}
void display()
{
    char data[100];
    rewind(fp);
    fscanf(fp, "%s", data);
    printf("The Data stored in the file is :\n%s \n", data);
}
void appendData()
{
    char data[100];
    printf("Enter the Data to enter into the File.\n");
    scanf("%s", data);
    fprintf(fp, "%s", data);
}
int main()
{
    int command;
    while(1)
    {
        printf("Press the key:\n");
        printf("1 => Create a File.\n");
        printf("2 => Display the contents of the File(%s).\n", file);
        printf("3 => Enter Data into the File(%s).\n", file);
        printf("0 => Exit.\n");
        scanf("%d", &command);
        switch(command)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                appendData();
                break;
            case 0:
                fclose(fp);
                exit(0);
            default:
                printf("Please Enter a Valid Input.\n");

        }
    }
    return 0;
}