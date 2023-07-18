#include "main.h"
/**
* is_lowercase - Checks if a character is lowercase.
* @c: The character to check.
*
* Return: 1 if @c is lowercase, 0 otherwise.
*/
int is_lowercase(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
