#include "main.h"

/**
 * _strncat - strncat function
 * @dest: destination
 * @src: Source
 * @n: number of bytes to be appended
 * return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0' && j < n; j++, i++)
        dest[i] = src[j];
    return (dest);
}
