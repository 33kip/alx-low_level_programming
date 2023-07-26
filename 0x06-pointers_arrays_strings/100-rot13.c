#include "main.h"
/**
* rot13 - Encodes a string using ROT13.
* @str: The input string to be encoded.
*
* Return: A pointer to the resulting string (str).
*/
char *rot13(char *str)
{
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = rot13letters[j];
break;
}
}
}
return (str);
}
