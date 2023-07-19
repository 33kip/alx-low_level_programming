#include <stdio.h>

/**
 * main - Calculates the sum of even-valued Fibonacci terms below 4,000,000
 * Return: Always 0
 */
int main(void)
{
long fib1 = 1, fib2 = 2, temp, sum = 0;
while (fib1 <= 4000000) {
if (fib1 % 2 == 0) {
sum += fib1;
}
temp = fib1 + fib2;
fib1 = fib2;
fib2 = temp;
}
printf("%ld\n", sum);
return 0;
}
