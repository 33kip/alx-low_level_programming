#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to check.
* @accept: The set of bytes to accept in the prefix.
*
* Return: The number of bytes in the initial segment of s
*         which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int length = 0;
int found;
for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (!found)
break;
length++;
}
return (length);
}
