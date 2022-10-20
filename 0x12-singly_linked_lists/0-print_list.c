#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * Description: if string is NULL print [0] (nil)
 * @h: list_t list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodeCounter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodeCounter++;

	}
	return (nodeCounter);
}
