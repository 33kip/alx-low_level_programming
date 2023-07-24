#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: The input string.
*/
void puts_half(char *str)
{
int length = 0;
int half_start;

while (str[length] != '\0')
{
        length++;
}

    half_start = length / 2;

while (str[half_start] != '\0')
{
        _putchar(str[half_start]);
        half_start++;
}

    _putchar('\n');
}
