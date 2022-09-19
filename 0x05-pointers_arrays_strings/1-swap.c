#include "main.h"

/**
 * swap_int - swap values of 2 integers
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
