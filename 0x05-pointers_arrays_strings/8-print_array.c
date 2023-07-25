#include <stdio.h>
/**
* print_array - function that prints elements of an array of integer
* followed by a new line
* @n: This is the input array
* @n: This is the length of the array
*/

void print_array(int *a, int n)
{
int index_of_array;

for (index_of_array = 0; index_of_array < n; index_of_array++) 
{
printf("%d", a[index_of_array]);
if (index_of_array < n - 1) 
{
printf(", ");
}
}
printf("\n");
}
