#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	if (str[0] != '\0')
	{
		do {
			_putchar(str[i]);
			i++;
		} while (str[i] != '\0');
	}
	_putchar('\n');
}
