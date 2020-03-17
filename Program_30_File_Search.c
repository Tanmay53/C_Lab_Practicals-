#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char fileN[100];

void createFile(void)
{
    char fileName[100], fData[1000];
    int ch;
    FILE *fp;

    printf("Enter the File Name : ");
    scanf("%s", fileName);

    fp = fopen(fileName, "w");
    printf("Enter the Data to Store into the file.\n");

    while(((ch = getchar()) != '\n') || (ch == EOF)) {}
    scanf("%[^\n]", fData);

    fputs(fData, fp);
    strcpy(fileN, fileName);
    fclose(fp);
}

int findText(char key[100])
{
    char ch, wordArray[1000][100];
    int keyFound = 0, wCount = 0, wLength = 0, l;
    FILE *fp = fopen(fileN, "r");

    if(fp == NULL)
    {
        printf("The File Does not exists.\n");
        strcpy(fileN, "");
        return -1;
    }
    else
    {
        while((ch = fgetc(fp)) != EOF)
        {
            if(ch == ' ')
            {
                wCount++;
                wLength = 0;
                continue;
            }
            wordArray[wCount][wLength] = ch;
            wLength++;
        }

        for(l = 0; l <= wCount; l++)
        {
            if(!(strcmp(key, wordArray[l])))
            {
                keyFound++;
            }
            printf("%s\n", wordArray[l]);
        }
        fclose(fp);
        return keyFound;
    }
}
int main()
{
    int command, searchResult, firstInput = 1;
    char searchKey[100], ch;
    while(1)
    {
        printf("Press the keys : \n");
        printf("1 => To Save a String to a File.\n");
        printf("2 => Search a word in the String.\n");
        printf("0 => Exit\n");

        command = 3; //Default Case;
        if(!firstInput) 
            while((ch = getchar()) != '\n' || (ch == EOF)) {}
        else
            firstInput = 0;        
        scanf("%d", &command);

        switch(command)
        {
            case 1:
                createFile();
                break;
            case 2:
                printf("Enter the Word to Find in the File(%s).\n", fileN);
                while(((ch = getchar()) != '\n') || (ch == EOF));
                scanf("%[^\n]", searchKey);

                searchResult = findText(searchKey);
                if(searchResult == 0)
                {
                    printf("There is no instance of '%s' in the file(%s).\n", searchKey, fileN);
                }
                else if(searchResult > 0)
                {
                    printf("There are %d istances of '%s' in the file(%s).\n", searchResult, searchKey, fileN);
                }
                
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Please enter a valid command.\n");
                continue;
        }
    }
    return 0;
}