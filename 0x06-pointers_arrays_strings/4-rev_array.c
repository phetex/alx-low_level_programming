#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: an  array of integers
 * @n: The number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			prinf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
	{
		int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

		print_array(a, sizeof(a) / sizeof(int));
		reverse_arrray(a, sizeof(a) / sizeof(int));
		print_array(a, sizeof(a) / sizeof(int));
		return (0);
	}
