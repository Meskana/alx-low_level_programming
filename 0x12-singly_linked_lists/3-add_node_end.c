#include "lists.h"

/**
 * add_node_end - add new node to the end of the list
 * @head: head of the node
 * @str: string
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *new_node, *holder;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = NULL;
	holder = *head;
	if (holder == NULL)
		*head = new_node;
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = new_node;
	}
	return (*head);
}
