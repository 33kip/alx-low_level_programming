#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, otherwise an error code
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}
if (argv[2][0] == '+')
{
result = op_add(num1, num2);
}
else if (argv[2][0] == '-')
{
result = op_sub(num1, num2);
}
else if (argv[2][0] == '*')
{
result = op_mul(num1, num2);
}
else if (argv[2][0] == '/')
{
result = op_div(num1, num2);
}
else if (argv[2][0] == '%')
{
result = op_mod(num1, num2);
}
else
{
printf("Error\n");
return (99);
}
printf("%d\n", result);
return (0);
}
