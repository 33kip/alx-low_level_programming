#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string to be printed in reverse.
 */
void print_rev(char *s)
{
    if (s != NULL)
    {
        int length = 0;
        char *start = s;
	
        while (*s != '\0')
        {
            length++;
            s++;
        }
        s = start;

        for (int i = length - 1; i >= 0; i--)
        {
            putchar(s[i]);
        }

        putchar('\n');
}
}
