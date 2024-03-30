#include <stdio.h>

int contains(char *str, char c)
{
    if (*str == c)
    {
        return 1;
    }
    else if ('\0' == *str)
    {
        return 0;
    }
    return contains(++str, c);
}

int main(int argc, char *argv[])
{
    printf("%d", contains((char *)"Hello", '1'));
    return 0;
}