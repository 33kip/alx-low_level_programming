#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: The destination string, where the result will be stored.
* @src: The source string, which will be appended to dest.
* @n: The maximum number of bytes from src to be appended.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
while (*dest_end != '\0')
dest_end++;
while (*src != '\0' && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest);
}
