#include "lists.h"

/**
 * list_len - print the number of nodes or element in the list
 * @h: list head
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
