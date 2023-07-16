#include <stdio.h>
int main(void)
{
    int i;

for (i = 0; i < 10; i++)
    {
        putchar(i + '0');  /* Print numbers 0-9 */
    }

for (i = 0; i < 6; i++)
    {
        putchar(i + 'a');  /* Print lowercase letters a-f */
    }

    putchar('\n');

return 0;
}
