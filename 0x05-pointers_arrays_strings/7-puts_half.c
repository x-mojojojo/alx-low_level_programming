#include "main.h"

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