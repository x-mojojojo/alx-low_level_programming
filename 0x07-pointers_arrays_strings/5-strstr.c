#include "main.h"
/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	i = 0;

	if (*needle == 0)
		return (haystack);

	for (;*haystack; haystack++)
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
