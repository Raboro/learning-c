#include <stdio.h>

void printArray(signed int size, int *ptr)
{
    for (int i = 0; i < size; i++)
    {
        printf("address %p with value %d\n", ptr, *ptr);
        ptr++;
    }
}

int main()
{
    int data[] = {10, 20};

    signed int arraySize = sizeof(data) / sizeof(data[0]);

    printf("%d\n", arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d \n", data[i]);
    }

    int *dataptr = &data[0];

    printf("%p, %d\n", dataptr, *(++dataptr));

    printArray(arraySize, &data[0]);

    printf("%p", data);
}