#include <unistd.h>
/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
*/
void print_alphabet_x10(void)
{
int i, j;
char letter;
for (i = 0; i < 10; i++)
{
letter = 'a';
for (j = 0; j < 26; j++)
{
putchar(letter);
letter++;
}
putchar('\n');
}
}
