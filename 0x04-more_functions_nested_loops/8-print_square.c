#include "main.h"

/**
 * print_square - draw square of given size
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	do
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} while (!size < 0);
}
