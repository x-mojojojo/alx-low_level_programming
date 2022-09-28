#include "main.h"

/**
 * _sqrt_recursion - calculate square root of integer n.
 * @n: integer.
 * Return: sqaure root of n.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n >= 0)
		return (sqrt_estimate(n, i));
	else
		return (-1);
}

/**
 * sqrt_estimate - calculates the estimated answer.
 * @num: integer
 * @est: estimated answer.
 * Return: square root of num.
 */
int sqrt_estimate(int num, int est)
{
	if (est * est == num)
		return (est);
	else if (est * est > num)
		return (-1);
	return (sqrt_estimate(num, est + 1));
}
