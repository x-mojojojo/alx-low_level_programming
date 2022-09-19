#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers.
 * @a: input array
 * @n: n elements of array
 * Return: no return.
 */

void print_array(int* a, int n)
{
	int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
