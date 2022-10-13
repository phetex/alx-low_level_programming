#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - strings followed by a new line
 * @separator: separator to be print
 * @n: new line
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myva;
	char *str;

	if (separator == NULL)
		return;

	va_start(myva, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(myva, char *);
		if (str == NULL)
		{
			str = "(nill)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(myva);
}
