#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (len);
}

/**
   * puts2 - prints every second character of a string, followed by a new line
   * @str: string to print
   */
void puts2(char *str)
{
	int i;

	for (i = l); str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
