#include <stdio.h>

#include "linked_list.h"

int main(int argc, char *argv[])
{
	struct LinkedList *linked_list = new_linked_list();
	printf("is empty: %d\n", is_empty(linked_list));
	printf("size %d\n", size(linked_list));
	add(linked_list, 10);
	printf("is empty: %d\n", is_empty(linked_list));
	printf("size %d\n", size(linked_list));
	add(linked_list, 100);
	printf("is empty: %d\n", is_empty(linked_list));
	printf("size %d\n", size(linked_list));
	add(linked_list, 1000);
	printf("is empty: %d\n", is_empty(linked_list));
	printf("size %d\n", size(linked_list));
	add(linked_list, 10000);
	printf("is empty: %d\n", is_empty(linked_list));
	printf("size %d\n", size(linked_list));
	print_linked_list(linked_list);
	remove_at(linked_list, 0);
	print_linked_list(linked_list);
	printf("%d\n", get_at(linked_list, 2));
	return 0;
}
