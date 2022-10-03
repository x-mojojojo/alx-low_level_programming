#include "main.h"

/**
 * _memset - fills the first n bytes of the
 *          memory area pointed to by s with
 *          the constant byte b.
 * @s: pointer to the block of memory to fill.
 * @b: This is the value to be set
 * @n: number of bytes to be set to the value.
 *
 * Return: A pointer to the memery area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n != 0)
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	return (s);
}
