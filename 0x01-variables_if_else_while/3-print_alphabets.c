#include <stdio.h>

/**
 * main - print alphabet
 * Return: return 0 if successful
 */
int main(void)
{
	char alphabet ;
	char new_line = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar(new_line);
	return (0);
}
