#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char* str)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		if (i > 9 / 2)
		{
			_putchar(str[i]);
		}
	}
}
