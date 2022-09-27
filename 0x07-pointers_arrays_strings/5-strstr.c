#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	i = 0;

	if (*needle == 0)
		return (haystack);

	for ( ; *haystack; haystack++)
	{
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
	}
	return ('\0');
}
