#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, k; 
	k = size - 1;

	if (size > 0)
	{
		for (i =0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
					_putchar(' ');
				else
					_putchar('#');
			}
			k--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
