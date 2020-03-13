#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char file[100];

void create()
{
    FILE *fp;
    char fName[100];
    printf("Enter the New File Name.\n");
    scanf("%s", fName);
    fp = fopen(fName, "w");
    printf("The current active file is : %s.\n", fName);
    strcpy(file, fName);
    fclose(fp);
}
void read(int newFile)
{
    FILE *fp;
    if(newFile == 1)
    {
        char nFile[100];
        printf("Enter New File Name.\n");
        scanf("%s", nFile);
        printf("The current active file is : %s\n", nFile);
        strcpy(file, nFile);
    }
    fp = fopen(file, "r");
    while(!feof(fp))
    {
        char data[101];
        fgets(data, 100, fp);
        printf("%s\n", data);
    }
    fclose(fp);
}
void append(int newFile)
{
    char data[1100];
    char nFile[100];
    char temp;
    FILE *fp;
    if(newFile == 1)
    {
        printf("Enter new File Name\n");
        scanf("%s", nFile);
        int c;
        while(((c = getchar()) != '\n') || (c == EOF));
        printf("The current active file is : %s\n", nFile);
        strcpy(file, nFile);
    }
    printf("Enter the Data to save in the File.\n");
    scanf("%[^\n]", data);
    fp = fopen(file, "a");
    fputs(data, fp);
    fclose(fp);
}
int main()
{
    int command;
    int scanCheck = 1;
    char temp[200];
    while(1)
    {
        printf("Press the following keys to control Files.\n");
        printf("1 => Create a New File.\n");
        printf("2 => Write into the Current File(%s).\n", file);
        printf("3 => Write into a new File.\n");
        printf("4 => Read the Current File(%s).\n", file);
        printf("5 => Read from a New File.\n");
        printf("0 => Exit.\n");
        command = 6;
        scanCheck = scanf("%d", &command);
        int c;
        while(((c = getchar()) != '\n') || (c == EOF));
        switch(command)
        {
        case 1:
            create();
            break;
        case 2:
            append(0);
            break;
        case 3:
            append(1);
            break;
        case 4:
            read(0);
            break;
        case 5:
            read(1);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Please Enter a Valid Integer from the given List.\n");
        }
    }
    return 0;
}
