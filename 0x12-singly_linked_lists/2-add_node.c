#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the node head
 * @str: pointer
 * Return: integer
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0, i;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
