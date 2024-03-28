#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv)
{
    struct Stack *stack = new ();
    printf("%d\n", is_empty(stack));
    push(stack, 10);
    printf("%d\n", is_empty(stack));

    int value = pop(stack);
    printf("value: %d and stack state is: %d\n", value, is_empty(stack));

    push(stack, 1);
    printf("capacity: %d\n", stack->capacity);
    push(stack, 10);
    printf("capacity: %d\n", stack->capacity);
    push(stack, 100);
    printf("capacity: %d\n", stack->capacity);
    push(stack, 1000);

    print_stack(stack);

    return 0;
}