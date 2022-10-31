#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length of string
 */

size_t _strlen(const char *str)
{
	const char *eos = str;

	while (*eos++);

	return(eos - str - 1);
}

/**
 * binary_to_uint - convert binary to decimal
 * @b: string in binary to be converted
 * Return: Decimal equivalent
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0, length;

	length = _strlen(b);

	for (i = 0; b[i]; i++, length--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			dec += 1 << (length - 1);
	}
	return (dec);
}
