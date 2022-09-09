#include <stdio.h>

/**
 * main - print alphabet
 * Return: return 0 if successful
 */
int main(void)
{
	char i = '0';
	char new_line = '\n';

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(new_line);
	return (0);
}
