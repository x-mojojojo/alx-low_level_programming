#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings and trim
 *        the second string to the first n characters
 * @s1: The first string.
 * @s2: The second string.
 * @n: number of characters to concatenate to s1 from s2.
 *
 * Return: a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	join = malloc(sizeof(char) * (len + 1));

	if (join == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		join[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		join[len++] = s2[i];

	join[len] = '\0';

	return (join);
}
