#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to the first element
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
