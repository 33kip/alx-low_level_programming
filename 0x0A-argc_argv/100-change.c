#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 if successful, 1 if invalid number of arguments or negative amount
 */
int main(int argc, char *argv[])
{
int cents, coins, i;
int coin_values[] = {25, 10, 5, 2, 1};
int num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins = 0;
for (i = 0; i < num_coin_values; i++)
{
coins += cents / coin_values[i];
cents %= coin_values[i];
}
printf("%d\n", coins);
return (0);
}
