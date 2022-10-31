#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	const char *eos = str;

	while (*eos++)
		;

	return (eos - str - 1);
}

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: NULL
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	if (s[0] != '\0')
	{
		do {
			i--;
			if (s[i] == '1' || s[i] == '0')
				_putchar(s[i]);
		} while (i > 0);
	}
	else if (i == 0)
		_putchar('0');
}

/**
 * print_binary - convert decimal to binary
 * @n: decimal to be converted
 * Return: NULL
 */
void print_binary(unsigned long int n)
{
	size_t binary, decimal, i = 0;
	char c[20] = {0};

	while (n > 0)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			decimal = n >> 1;
			binary = n - (decimal << 1);
			c[i] = (binary + '0');
		}
		n = n >> 1;
		i++;
	}
	print_rev(c);
}
