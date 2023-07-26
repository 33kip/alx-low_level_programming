#include "main.h"
/**
* leet - Encodes a string into 1337.
* @str: The input string to be encoded.
*
* Return: A pointer to the resulting string (str).
*/
char *leet(char *str)
{
char *letters = "aeotlAEOTL";
char *leets = "4307143071";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leets[j];
break;
}
}
}
return (str);
}
