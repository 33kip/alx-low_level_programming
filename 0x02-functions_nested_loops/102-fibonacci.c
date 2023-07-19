#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
    int i = 0;
    long fib[50];
    fib[0] = 1;
    fib[1] = 2;
    for (i = 2; i < 50; i++) 
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (i = 0; i < 50; i++) {
        printf("%ld", fib[i]);
        if (i < 49)
            printf(", ");
    }

    printf("\n");
    return 0;
}
