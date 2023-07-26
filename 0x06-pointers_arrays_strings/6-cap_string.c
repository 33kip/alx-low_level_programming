#include "main.h"

/**
* is_separator - Checks if a character is a separator.
* @c: The character to check.
*
* Return: 1 if c is a separator, 0 otherwise.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
* cap_string - Capitalizes all words of a string.
* @str: The input string.
*
* Return: A pointer to the resulting string (str).
*/
char *cap_string(char *str)
{
int capitalize = 1;
char *ptr = str;
while (*ptr != '\0')
{
if (is_separator(*ptr))
{
capitalize = 1;
}
else if (capitalize)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 'a' + 'A';
}
capitalize = 0;
}
ptr++;
}
return (str);
}
