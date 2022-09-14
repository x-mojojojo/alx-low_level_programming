#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	i = 1;

	while (i<=10)
	{
		print_alphabet();
		i++;
	}
	putchar('\n');
}
