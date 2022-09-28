#include "main.h"

/**
 * factorial - function that solves the factorial of a number.
 * @n: integer
 * Return: factorial of n.
 */

int factorial(int n)
{
	unsigned int fact = 1;

	if (n >=1)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
