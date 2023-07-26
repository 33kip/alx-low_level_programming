#include "main.h"
/**
* reverse_array - Reverses the content of an array of integers.
* @a: An array of integers.
* @n: The number of elements in the array.
*
* Return: Nothing (void).
*/
void reverse_array(int *a, int n)
{
int temp;
int i;
int j;
for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
