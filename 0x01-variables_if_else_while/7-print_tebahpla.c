#include <stdio.h>

/**
 * main - print alphabet
 * Return: return 0 if successful
 */
int main(void)
{
	int n;

    for (n = 122; n >= 97; n--)
    {
        putchar(n);
    }
	putchar('\n');
	return (0);
}
