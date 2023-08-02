#include "main.h"

/**
* is_prime_recursive - Helper function to check if a number is prime.
* @n: The number to check for prime.
* @divisor: The current divisor to test.
* Return: 1 if the number is prime, otherwise 0.
*/
int is_prime_recursive(int n, int divisor)
{
if (n <= 1 || n % divisor == 0)
{
if (n == 1 || n == 0)
{
return (0);
}
return (1);
}
return (is_prime_recursive(n, divisor + 1));
}
/**
* is_prime_number - Returns 1 if the input integer is a prime number.
* @n: The number to check.
* Return: 1 if the number is prime, otherwise 0.
*/
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
