#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars,
  *               and initializes it with a specific char.
  *@size: size of array.
  *@c: character to be initialized
  *Return: 0 if success
  */

char *create_array(unsigned int size, char c)
{
	char *ch = (char*)malloc(size *sizeof(char));
	unsigned int i;

  if (ch == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size && size != 0; i++)
			ch[i] = c;
		return (ch);
	}
	free(ch);
}
