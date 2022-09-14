#include <stdio.h>
#define _PUTCHAR "_putchar"

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
}