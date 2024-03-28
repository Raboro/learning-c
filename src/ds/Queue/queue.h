#ifndef QUEUE
#define QUEUE

#include <stdlib.h>
#include <stdio.h>

struct Queue
{
    int *data;
    size_t capacity;
    size_t size;
    size_t pos;
};

struct Queue *new_queue();

int is_empty(struct Queue *queue);

void queue_(struct Queue *queue, int value);

int dequeue(struct Queue *queue);

void print_queue(struct Queue *queue);

#endif