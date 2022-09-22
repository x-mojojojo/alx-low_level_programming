#include "main.h"
#include <stdio.h>

void reverse_array(int* a, int n)
{
	int i, k;
	int j[] = {0};

	for (i = 0, k =n; i < n; i++, k--);
	{
		j[i] = a[k];
	}
	printf("%d, %d", a[k], j[i]);
}