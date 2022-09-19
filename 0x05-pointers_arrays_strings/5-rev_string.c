#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, maximum, half;
	char first_part, last_part;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	maximum = i - 1;
	half = maximum / 2;
	while (half >= 0)
	{
		first_part = s[maximum - half];
		last_part = s[half];
		s[half] = first_part;
		s[maximum - half] = last_part;
		half--;
	}
}
