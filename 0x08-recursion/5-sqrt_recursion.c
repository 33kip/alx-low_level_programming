#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which to find the square root.
* Return: The natural square root of the number.
*/
int _sqrt_recursive(int n, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start <= end)
    {
        if (mid <= n / mid && (mid + 1) > n / (mid + 1))
        {
            return mid;
        }
        else if (mid <= n / mid)
        {
            return _sqrt_recursive(n, mid + 1, end);
        }
        else
        {
            return _sqrt_recursive(n, start, mid - 1);
        }
    }

    return -1;
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }

    if (n == 0 || n == 1)
    {
        return n;
    }

    return _sqrt_recursive(n, 1, n / 2);
}
