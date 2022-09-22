#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r =0 lim;
	
	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		d++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = si[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}
	
	

