#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char* _strncpy(char* dest, char* src, int n)
{
    int i, j;

    for (j = 0, i = 0; src[i++]; j++);

    for (i = 0; src[i] != '\0' && i <= n - 1; i++)
        dest[i] = src[i];
    for (i = j; i < n; i++)
        dest[i] = '\0';
    return (dest);
}
