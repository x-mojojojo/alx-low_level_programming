#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int round, i;

	if (n > 0)
	{
		for (round = 1; round <= n; round++)
		{
			for (i = 0; i < round; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
