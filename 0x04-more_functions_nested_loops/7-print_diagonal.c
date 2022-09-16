#include "main.h"

void print_diagonal(int n)
{
	int round, i;

	if (n > 0)
	{
		for (round =1; round <= n; round++)
		{
			for (i = 0; i < round; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}