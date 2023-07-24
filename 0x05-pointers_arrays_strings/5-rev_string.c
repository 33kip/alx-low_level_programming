#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0;
    int half;
    char temp;
    int i;

    while (s[length] != '\0')
    {
        length++;
    }

    half = length / 2;

    for (i = 0; i < half; i++)
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}
