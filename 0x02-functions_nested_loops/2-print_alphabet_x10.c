#include <stdio.h>
/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
*/
void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';
while (i < 10)
{
int j = 0;
while (j < 26)
{
putchar(letter);
letter++;
j++;
}
letter = 'a'; /* Reset the letter to 'a' after each iteration of the outer loop */
putchar('\n');
i++;
}
}
