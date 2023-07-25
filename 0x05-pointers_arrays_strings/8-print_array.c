#include <stdio.h>
/**
 * print_array - function that prints elements of an array of integer
 * followed by a new line
 * @n: This is the input array
 * @n: This is the length of the array
 */

void print_array(int *a, int n) {
    if (a == NULL || n <= 0) 
{

        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");
}
