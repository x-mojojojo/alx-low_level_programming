#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
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
    }
    return (str);
}
