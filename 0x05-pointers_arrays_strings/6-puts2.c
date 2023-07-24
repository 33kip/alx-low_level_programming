#include "main.h"

/**
 * puts2 - Prints characters of a string.
 * @str: The input string to be printed.
 * Return: None.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
