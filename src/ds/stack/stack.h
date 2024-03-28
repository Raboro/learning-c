#ifndef STACK
#define STACK

#include <stdlib.h>

struct Stack
{
    int *data;
    size_t size;
    size_t capacity;
};

struct Stack *new();

void push(struct Stack *stack, int value);

int pop(struct Stack *stack);

int is_empty(struct Stack *stack);

void print_stack(struct Stack *stack);

#endif