#iclude "main.h"


/**
 * _strincpy - copy a string
 * @dest: The destination value
 * @src: the source value
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int e = 0, f = 0;

	while (src[f])
	{
		f++;
	}

	while (e < n && src[e])
	{
		dest[e] = src[e];
		e++;
	}

	while (e < n)
	{
		dest [e] = '\0';
		e++;
	}
	return (dest);
}
