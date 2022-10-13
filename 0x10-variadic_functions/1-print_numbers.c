#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - fuction that prints
 * @separator:  line separator
 * @n: and int passes to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myva;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(myva, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(myva, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(myva);
}
