#include "main.h"

/**
 * leet - 1337.
 * @str: The string to be 1337'd.
 *
 * Return: A pointer to the changed string.
 */

char *leet(char *str)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int ieet[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == lower_case[i] || *(str + count) == upper_case[i])
			{
				*(str + count) = ieet[i];
				break;
			}
		}
		count++;
	}

	return (str);
}
