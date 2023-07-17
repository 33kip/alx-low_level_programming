#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all possible different combinations of two digits
* separated by ", " and in ascending order.
*
* Return: Always 0
*/
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
    putchar((i % 10) + '0');
    putchar((j % 10) + '0');

if (i != 8 || j != 9)
{
    putchar(',');
    putchar(' ');
}
}
}
     putchar('\n');

return (0);
}
