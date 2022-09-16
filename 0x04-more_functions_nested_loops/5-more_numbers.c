#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, j, round;

	for (round = 1; round <= 10; round++)
	{
		for (i = 48; i <= 49; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i == 49 && j == 53)
					break;
				else if (i==48)
				{
					putchar(j);
				}
				else
				{
					_putchar(i);
					_putchar(j);
				}
			}
		}
		_putchar('\n');
	}
}
