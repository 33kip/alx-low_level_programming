#include "main.h"

int main(void)
{
char input;
int result;
/* Read a character from the user */
write(STDOUT_FILENO, "Enter a character: ", 19);
read(STDIN_FILENO, &input, 1);
/* Check if the character is lowercase */
result = _islower(input);
/* Print the result */
putchar(result + '0');
putchar('\n');
return (0);
}
