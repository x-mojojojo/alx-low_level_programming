#include <stdio.h>
#include "main.h"

/**
  *
  *main - print _putchar 
  * 
  *return - return value if successful
  */
int main(void)
{
    int i;

    for (i = 0; i <= 8; i++)
        putchar(_PUTCHAR[i]);
    putchar('\n');
    return (0);
}
