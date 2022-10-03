#include "main.h"

/**
 * _strchr - searches for first occurence
 *					of a char in a string.
 * @s: string to be searched
 * @c: char to be searched in s
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
