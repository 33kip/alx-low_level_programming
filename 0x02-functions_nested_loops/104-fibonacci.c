#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
int i;
unsigned long fib1 = 1, fib2 = 2, temp;
printf("%lu, %lu", fib1, fib2);

for (i = 2; i < 98; i++) {
temp = fib1 + fib2;
printf(", %lu", temp);

fib1 = fib2;
fib2 = temp;
}
printf("\n");
return 0;
}
