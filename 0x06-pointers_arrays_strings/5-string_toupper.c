#include "main.h"

/**
 * string_toupper - lowercase to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char* string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		} 
	return (str);
}
