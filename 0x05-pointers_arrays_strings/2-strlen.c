#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	do
	{
		++i;
	} while (s[i] != '\0');
	
	return(i);
}
