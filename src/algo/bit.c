#include <stdio.h>

int count_ones(int number)
{
    int counter = 0;
    while (number)
    {
        counter += number & 1;
        number >>= 1;
    }
    return counter;
}

int main(int argc, char *argv[])
{

    printf("Hello world %d", count_ones(10));
}