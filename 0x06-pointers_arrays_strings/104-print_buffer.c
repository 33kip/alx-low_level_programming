#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_buffer - Prints the content of a buffer.
* @b: The buffer to print.
* @size: The number of bytes to print from the buffer.
*/
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", b[j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (j = i; j < i + 10; j++)
{
if (j >= size)
putchar(' ');
else if (isprint(b[j]))
putchar(b[j]);
else
putchar('.');
}
putchar('\n');
}
}
