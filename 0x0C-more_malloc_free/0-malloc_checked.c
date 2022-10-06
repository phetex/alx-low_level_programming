#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Array for prints a string
  * @b: the number of memory
  *
  * Return: void.
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
