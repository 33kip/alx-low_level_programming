#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string, where the result will be stored.
* @src: The source string, which will be appended to dest.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;

while (*dest_end != '\0')
dest_end++;

while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}

*dest_end = '\0';

return dest;
}
