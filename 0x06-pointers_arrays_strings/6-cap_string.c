#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == '}')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '{')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == ')')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '(')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '"')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '?')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '!')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '.')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == ';')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == ',')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == ' ')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '\n')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
        if (str[i] == '\t')
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] -= 32;
    }
    return (str);
}
