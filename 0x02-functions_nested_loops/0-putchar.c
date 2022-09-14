#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
  int i;
  
  for (i = 0; i <= 8; i++)
    putchar(_PUTCHAR[i]);
  putchar('\n');
  return (0);
}
