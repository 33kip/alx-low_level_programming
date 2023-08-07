#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k = 0;
char *concatenated;
if (ac <= 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}
concatenated = malloc(sizeof(char) * (total_length + 1));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n';
k++;
}
concatenated[k] = '\0';
return (concatenated);
}

