#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter = 'a';

	while (times < 10)
	{
		letter = 'a';
		
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');

		times++;
	}
}
