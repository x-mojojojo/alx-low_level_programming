#include <stdio.h>

/**
 * main - print alphabet
 * Return: return 0 if successful
 */
int main(void)
{
	char alphabet = 'a';
	char new_line = '\n';
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	putchar(new_line);
}
