#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
int i, j, k;
int word_count = 0;
char **words = NULL;
if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
word_count++;
}
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
k = 0;
for (i = 0; i < word_count; i++)
{
while (str[k] == ' ')
k++;
for (j = k; str[j] != '\0' && str[j] != ' '; j++);
words[i] = malloc(sizeof(char) * (j - k + 1));
if (words[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
free(words[i]);
free(words);
return (NULL);
}
strncpy(words[i], &str[k], j - k);
words[i][j - k] = '\0';
k = j;
}
words[i] = NULL;
return (words);
} 
