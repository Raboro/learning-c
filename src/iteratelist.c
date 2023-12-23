#include <stdio.h>

int lengthOfArray(char *data)
{
    int length = 0;
    while (*data != '\0')
    {
        data++;
        length++;
    }
    return --length;
}

int main()
{
    char data[] = {'a', 'b'};

    for (int i = 0; i < lengthOfArray(data); i++)
    {
        printf("%c", data[i]);
    }
}