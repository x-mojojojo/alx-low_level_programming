#include <stdio.h>

/**
 * main - numbers separated by a comma
 * Return: return 0 if successful
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
    {
		putchar(i);
		if (i < 57)
        {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
