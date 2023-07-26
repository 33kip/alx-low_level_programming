#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r), or 0 if the result can't be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, carry, len1, len2, sum;

    for (len1 = 0; n1[len1] != '\0'; len1++)
        ;
    for (len2 = 0; n2[len2] != '\0'; len2++)
        ;

    if (size_r <= len1 || size_r <= len2)
        return (0);

    carry = 0;
    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i--] - '0';

        if (j >= 0)
            sum += n2[j--] - '0';

        r[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    r[k] = '\0';

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}

