#include"lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the first node
 * Return: sum of all data in the node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int count = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
