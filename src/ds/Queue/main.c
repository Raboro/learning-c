#include <stdio.h>

#include "queue.h"

int main(int argc, char *argv[])
{
    struct Queue *queue = new_queue();
    printf("Queue is empty: %d\n", is_empty(queue));

    queue_(queue, 10);
    printf("Queue is empty: %d\n", is_empty(queue));

    int value = dequeue(queue);
    printf("Queue with value %d is empty: %d\n", value, is_empty(queue));

    queue_(queue, 1);
    queue_(queue, 10);
    queue_(queue, 100);
    queue_(queue, 1000);

    print_queue(queue);

    dequeue(queue);

    print_queue(queue);

    return 0;
}