#include "../ds/stack/stack.h"
#include <stdio.h>

short size_of_palindrome(char *chars)
{
    char *temp_ptr = chars;
    short size = 0;

    while ('\0' != (char)(*temp_ptr))
    {
        temp_ptr++;
        size++;
    }
    return size;
}

int is_palindrome_stack(char *chars)
{
    struct Stack *stack = new ();
    short size = size_of_palindrome(chars);

    for (short i = 0; i < size / 2; i++)
    {
        push(stack, *chars++);
    }

    for (short i = 0; i < size / 2; i++)
    {
        int value = pop(stack);
        if (value != *chars)
        {
            return 0;
        }
        chars++;
    }
    return 1;
}

int is_palindrome(char *chars)
{
    short size = size_of_palindrome(chars);
    char *end = chars + size - 1;

    for (int i = 0; i < size / 2; i++)
    {
        if (*chars++ != *end--)
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{

    char *palindrome = "HeeH";
    char *palindrome2 = "HeeH";

    printf("is: %d\n", is_palindrome_stack(palindrome));
    printf("is: %d\n", is_palindrome(palindrome2));

    return 0;
}