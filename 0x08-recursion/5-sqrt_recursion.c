#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which to find the square root.
* Return: The natural square root of the number.
*/
int _sqrt_recursion(int n)
{
int start = 1;
int end = n / 2;
int result = 0;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
while (start <= end)
{
int mid = start + (end - start) / 2;
if (mid <= n / mid)
{
result = mid;
start = mid + 1;
}
else
{
end = mid - 1;
}
}
return (result);
}
