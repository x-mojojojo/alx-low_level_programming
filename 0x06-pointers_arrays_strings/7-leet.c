#include "main.h"

/**
 * leet - 1337.
 * @str: The string to be 1337'd.
 *
 * Return: A pointer to the changed string.
 */

char *leet(char *str)
{
	int i = 0;

	while (str[0] != '\0')
	{
		for (i = 0; str[i]; i++)
		{
			if (str[i] == 'a' || str[i] == 'A')
				str[i] = '4';
			else if (str[i] == 'e' || str[i] == 'E')
				str[i] = '3';
			else if (str[i] == 'o' || str[i] == 'O')
				str[i] = '0';
			else if (str[i] == 't' || str[i] == 'T')
				str[i] = '7';
			else if (str[i] == 'l' || str[i] == 'L')
				str[i] = '1';
		}
		return (str);
	}
	return (str);
}
