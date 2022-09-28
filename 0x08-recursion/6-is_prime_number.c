#include "main.h"

/**
 * is_prime_number - function that shows if a number is prime.
 * @n: integer to find out.
 * Return: 1 if prime 0 if not.
 */

int is_prime_number(int n)
{
	int i;

	i = n/2;

	if (n <= 1)
		return (0);
	else
		return (_prime(n, i));
}

/**
 * _prime - function to calculate if prime
 * @num: integer to find out.
 * @div: integer to mod by.
 * Return: return answer is is_prime_number..
 */

int _prime(int num, int div)
{
	if (div >= 2)
	{
		if (num % div == 0)
			return (0);
		else
			return (_prime(num, div - 1));
	}
	else
		return (1);
}
