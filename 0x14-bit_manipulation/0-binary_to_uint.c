#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there are invalid characters in b.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b == '0')
{
result <<= 1;
}
else if (*b == '1')
{
result <<= 1;
result |= 1;
}
else
{
return (0);
}
b++;
}
return (result);
}

