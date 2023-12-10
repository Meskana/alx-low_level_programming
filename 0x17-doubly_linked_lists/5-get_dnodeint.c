#include"lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: a node at a particular index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int num;

	temp = head;

	if (head == NULL)
		return (NULL);
	num = 0;

	while (temp != NULL)
	{
		if (num == index)
			break;
		temp = temp->next;
		num++;
	}
	return (temp);
}
