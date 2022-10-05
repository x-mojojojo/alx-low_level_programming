#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: Tbe added to s1.
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	return (concat);
	free(concat);
}
