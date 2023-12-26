#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node_t;

void printNode(node_t *node)
{
    printf("Value: %d\n", node->value);
}

void printList(node_t *head)
{
    node_t *current = head;

    while (NULL != current)
    {
        printf("%d\n", current->value);
        current = current->next;
    }
}

void push(node_t *head, int value)
{
    node_t *current = head;
    while (NULL != current->next)
    {
        current = current->next;
    }
    node_t *newNode = (node_t *)malloc(sizeof(node_t));
    newNode->value = value;
    newNode->next = NULL;
    current->next = newNode;
}

int main()
{
    node_t *node_1 = (node_t *)malloc(sizeof(node_t));
    node_1->value = 10;
    node_1->next = NULL;
    printNode(node_1);
    printList(node_1);

    push(node_1, 5);
    printList(node_1);
}