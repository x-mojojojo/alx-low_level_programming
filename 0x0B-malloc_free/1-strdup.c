#include "main.h"
#include <stdlib.h>

/**
  *lengthofstring - same as strlen.
  *@s: string to get length of.
  *Return: length of string.
  */

int lengthofstring(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
  *_strdup - same as strdup
  *@str: string to be duplicated
  *Return: 0 if success.
  */

char *_strdup(char *str)
{
  int k, i;
	char *ch;

	k = lengthofstring(str) + 1;
  i = 0;
	ch = (char *)malloc(k * sizeof(char));

  if (ch == NULL)
		return (NULL);
  if (str == NULL)
    return (NULL);
	while (i < k)
	{
		ch[i] = str[i];
		i++;
	}
	return (ch);
	free(ch);
}
