#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0' && j < n; j++, i++)
        dest[i] = src[j];
    return (dest);
}
