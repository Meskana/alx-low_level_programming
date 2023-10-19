#include "lists.h"

/**
 * free_list - function that free list
 * @head: list head
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
