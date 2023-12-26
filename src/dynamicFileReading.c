#include <stdio.h>

#define SEEK_START 0

FILE *getFile(char *fileName)
{
    FILE *file = fopen(fileName, "rb");

    if (NULL == file)
    {
        perror("ERROR");
        return NULL;
    }

    return file;
}

size_t determineSizeOfFile(FILE *file)
{
    size_t fileSize;

    fseek(file, SEEK_START, SEEK_END);
    fileSize = ftell(file);
    fseek(file, SEEK_START, SEEK_SET);

    return fileSize + 1; // off by one => increase by one
}

void readFile(FILE *file, size_t fileSize)
{
    char buffer[fileSize];

    fgets(buffer, fileSize, file);

    printf("%s\n", buffer);
    fclose(file);
}

int main()
{
    FILE *file = getFile("test.txt");
    if (NULL != file)
    {
        printf("%d\n", determineSizeOfFile(file));
        readFile(file, determineSizeOfFile(file));
    }
}