#include"lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the first node
 * @n: data
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	temp = *head;
	new_node->n = n;

	if (temp != NULL)
	{
		temp->prev = new_node;
		new_node->next = temp;
		new_node->prev = NULL;
		temp = new_node;
	}

	*head = new_node;
	return (new_node);
}
