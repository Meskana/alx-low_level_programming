#include"lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	temp = head;

	while (temp != NULL)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
}
