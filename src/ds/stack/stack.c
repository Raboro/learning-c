#include <stdio.h>

#include "stack.h"

struct Stack *new()
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = 1;
    stack->data = (int *)malloc(stack->capacity * sizeof(int));
    stack->size = 0;
    return stack;
}

void push(struct Stack *stack, int value)
{
    if (stack->size >= stack->capacity)
    {
        stack->capacity = stack->capacity * 2;
        stack->data = (int *)realloc(stack->data, stack->capacity * sizeof(int));
    }

    stack->data[stack->size] = value;
    stack->size++;
}

int pop(struct Stack *stack)
{
    if (is_empty(stack))
    {
        return -1;
    }

    int pop_value = stack->data[stack->size--];
    return pop_value;
}

int is_empty(struct Stack *stack)
{
    return stack->size == 0;
}

void print_stack(struct Stack *stack)
{
    if (is_empty(stack))
    {
        return;
    }

    int stack_size = stack->size - 1;

    while (stack_size >= 0)
    {
        printf("At index: %d is value: %d\n", stack_size + 1, stack->data[stack_size--]);
    }
}