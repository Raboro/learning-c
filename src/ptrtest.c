#include <stdio.h>

void printInt(int *num)
{
    printf("%p, with value %d", num, *num);
}

int main()
{
    int num = 10;

    printf("%d\n", num);

    int *numPtr = &num;

    printf("%p\n", numPtr);

    printf("%d\n", *numPtr);

    printInt(&num);
}