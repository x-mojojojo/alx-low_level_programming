#include <stdio.h>

/**
 * main - print alphabet
 * Return: return 0 if successful
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
		putchar(alphabet);
	}
	return (0);
}
