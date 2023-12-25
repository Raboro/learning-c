#include <stdio.h>
#include <stdlib.h>

FILE *getFilePtr(char *fileName)
{
    FILE *filePtr = fopen(fileName, "r");

    if (NULL == filePtr)
    {
        printf("Error!");
        exit(1);
    }

    return filePtr;
}

char *readFile(char *fileName)
{
    FILE *filePtr = getFilePtr(fileName);
    static char buffer[10];

    fgets(buffer, 10, filePtr);
    fclose(filePtr);

    return buffer;
}

int main()
{
    printf("%s", readFile("test.txt"));
}