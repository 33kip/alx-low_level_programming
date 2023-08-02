#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: The string to find the length of.
* Return: Length of the string.
*/
int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen(s + 1));
}
/**
* is_palindrome_recursive - Helper function to check a palindrome.
* @s: The string to check.
* @start: The start index of the current comparison.
* @end: The end index of the current comparison.
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
* is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
* @s: The string to check.
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
return (is_palindrome_recursive(s, 0, len - 1));
}
