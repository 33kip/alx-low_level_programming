#include "main.h"
#include <stdio.h>

/**
* _puts - Prints a string followed by a new line.
* @str: The input string to be printed.
* Return: String and new line
*/
void _puts(char *str)
{
if (str != NULL)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
}
