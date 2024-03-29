#include "linked_list.h"

struct LinkedList *new_linked_list()
{
    struct LinkedList *linked_list = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    linked_list->next = NULL;
    linked_list->has_value = 0;
    return linked_list;
}

int is_empty(struct LinkedList *linked_list)
{
    return NULL == linked_list->next && !linked_list->has_value;
}

void add(struct LinkedList *linked_list, int value)
{
    if (is_empty(linked_list))
    {
        linked_list->value = value;
        linked_list->has_value = 1;
    }
    else if (NULL == linked_list->next)
    {
        linked_list->next = new_linked_list();
        linked_list->next->value = value;
        linked_list->next->has_value = 1;
    }
    else
    {
        add(linked_list->next, value);
    }
}

int size(struct LinkedList *linked_list)
{
    if (is_empty(linked_list))
    {
        return 0;
    }
    return (NULL == linked_list->next && linked_list->has_value) ? 1 : size(linked_list->next) + 1;
}

void _print_linked_list_(struct LinkedList *linked_list)
{
    if (is_empty(linked_list))
    {
        printf("]\n");
        return;
    }
    if (NULL == linked_list->next && linked_list->has_value)
    {
        printf("%d]\n", linked_list->value);
        return;
    }
    printf("%d, ", linked_list->value);
    _print_linked_list_(linked_list->next);
}

void print_linked_list(struct LinkedList *linked_list)
{
    printf("[");
    _print_linked_list_(linked_list);
}

void remove_at(struct LinkedList *linked_list, int index)
{
    if (index > 1 && NULL != linked_list->next)
    {
        remove_at(linked_list->next, --index);
        return;
    }
    if (index == 1)
    {

        if (NULL == linked_list->next->next)
        {
            linked_list->next = NULL;
        }
        else
        {
            linked_list->next = linked_list->next->next;
        }
    }
    if (index == 0)
    {
        linked_list->value = linked_list->next->value;
        linked_list->has_value = linked_list->next->has_value;
        linked_list->next = linked_list->next->next;
    }
}

int get_at(struct LinkedList *linked_list, int index)
{
    if (index < 0)
    {
        return -1;
    }

    if (index > 0 && NULL != linked_list->next)
    {
        return get_at(linked_list->next, --index);
    }
    else if (index > 0 && NULL == linked_list->next)
    {
        return -1;
    }
    return linked_list->value;
}