#include "queue.h"

struct Queue *new_queue()
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->data = (int *)malloc(sizeof(int));
    queue->capacity = 1;
    queue->pos = -1;
    queue->size = 0;
    return queue;
}

int is_empty(struct Queue *queue)
{
    return queue->size == 0;
}

void queue_(struct Queue *queue, int value)
{
    if (queue->size >= queue->capacity)
    {
        queue->capacity = queue->capacity * 2;
        queue->data = (int *)realloc(queue->data, queue->capacity * sizeof(int));
    }

    queue->data[queue->size] = value;
    queue->pos = is_empty(queue) ? 0 : queue->pos;
    queue->size++;
}

int dequeue(struct Queue *queue)
{
    if (is_empty(queue))
    {
        queue->pos = -1;
        return -1;
    }

    int value = queue->data[queue->pos++];
    queue->size--;
    return value;
}

void print_queue(struct Queue *queue)
{
    if (is_empty(queue))
    {
        return;
    }

    int pos = queue->pos;
    int index = 0;
    while (index < queue->size)
    {
        printf("At position: %d and index: %d: value: %d\n", pos - 1, index, queue->data[pos++]);
        index++;
    }
}