#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, result, ten, one;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			ten = result / 10;
			one = result % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(one + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(one + '0');
			}
		}
		_putchar('\n');
	}
}
