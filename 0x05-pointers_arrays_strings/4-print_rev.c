#include "main.h"


void print_rev(char* s)
{
	int i;

	i = 0;

	do
	{
		i++;
	} while (s[i] != '\0');

	do
	{
		i--;
		_putchar(s[i]);
	} while (i >=0);
	_putchar('\n');
}