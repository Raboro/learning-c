#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdlib.h>
#include <stdio.h>

struct LinkedList
{
    int value;
    struct LinkedList *next;
    int has_value;
};

struct LinkedList *new_linked_list();

int is_empty(struct LinkedList *linked_list);

void add(struct LinkedList *linked_list, int value);

int size(struct LinkedList *linked_list);

void print_linked_list(struct LinkedList *linked_list);

void remove_at(struct LinkedList *linked_list, int index);

int get_at(struct LinkedList *linked_list, int index);

#endif