#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char upper = c;

	if (upper >= 'A' && upper <= 'Z')
		return (1);
	else
		return (0);
}
