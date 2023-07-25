#include "9-strcpy.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination buffer where the string will be copied to.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}
