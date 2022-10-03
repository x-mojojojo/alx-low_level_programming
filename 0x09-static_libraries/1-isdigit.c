#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	char digit = c;

	if (digit >= '0' && digit <= '9')
		return (1);
	else
		return (0);
}
