#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking of the end of the
 *           first word contained within a string
 * @str: the string to be searched
 *
 * Return: the index marking to the end of the initail word pointer to by str
 *
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - count the number of worda countained within a stirng
 * @str: the string to be searched
 *
 * Return: the number of words contained within str
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index)  != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: if str = NULL, str = **, or the function falls - NULL.
 *          otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, 1;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (1 = 0; 1 < letters; 1++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
