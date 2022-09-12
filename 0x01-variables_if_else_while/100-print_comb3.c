#include <stdio.h>

/**
 * main - one to hundred without repeating double numbers eg 11 or 21
 * 
 * return int 
 */
int main(void) {

	int i, j;
	
	for (i = 48; i < 58; i++)
	{
		for ( j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
