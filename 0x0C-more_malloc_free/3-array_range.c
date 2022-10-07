#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value in the array.
 * @max: maximum value in the array.
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int* range, i;

	if (min > max)
		return (NULL);

	range = malloc((1 + max - min) * sizeof(int));

	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		range[i] = min;
	return (range);
	free(range);
}
