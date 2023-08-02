#include "main.h"
/**
* wildcmp_recursive - Helper function to compare two strings.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string.
* Return: 1 if the strings are identical, otherwise 0.
*/
int wildcmp_recursive(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s2 == '*')
{
if (*(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (wildcmp_recursive(s1, s2 + 1))
return (1);
if (*s1 != '\0' && wildcmp_recursive(s1 + 1, s2))
return (1);
}
if (*s1 == *s2)
return (wildcmp_recursive(s1 + 1, s2 + 1));
return (0);
}
/**
* wildcmp - Compares two strings and returns 1.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string.
* Return: 1 if the strings are identical, otherwise 0.
*/
int wildcmp(char *s1, char *s2)
{
return (wildcmp_recursive(s1, s2));
}

