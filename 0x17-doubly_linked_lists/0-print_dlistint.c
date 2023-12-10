#include"lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the first node
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp;

	temp = h;
	if (h == NULL)
		return (count);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
