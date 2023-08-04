#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = _strlen(dest);
    for (int i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + n] = '\0';
    return dest;
}
