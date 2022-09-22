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

    if (str[0] != '\0')
        for (i = 0; str[i]; i++)
        {
            if (str[i] == '}' ||
                str[i] == '{' ||
                str[i] == ')' ||
                str[i] == '(' ||
                str[i] == '"' ||
                str[i] == '?' ||
                str[i] == '!' ||
                str[i] == '.' ||
                str[i] == ';' ||
                str[i] == ',' ||
                str[i] == ' ' ||
                str[i] == '\n' ||
                str[i] == '\t')
            {
                if (str[i + 1] >= 97 && str[i + 1] <= 122)
                {
                    str[i + 1] = str[i+1] - 32;
                }
            }    
        }
    return (str);
}
