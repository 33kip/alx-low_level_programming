#include "main.h"
/**
* _strncpy - Copies a string.
* @dest: The destination buffer where the string will be copied.
* @src: The source string to be copied.
* @n: The maximum number of bytes to copy from the source.
*
* Return: A pointer to the destination string (dest).
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
