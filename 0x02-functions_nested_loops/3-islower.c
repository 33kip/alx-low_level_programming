#include <unistd.h> // For write and STDIN_FILENO
#include "main.h"

/**
 * is_lowercase - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */
int is_lowercase(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char input;
    int result;

    /* Read a character from the user */
    write(STDOUT_FILENO, "Enter a character: ", 19);
    read(STDIN_FILENO, &input, 1);

    /* Check if the character is lowercase */
    result = is_lowercase(input);

    /* Print the result */
    putchar(result + '0');
    putchar('\n');

    return (0);
}
