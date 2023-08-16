#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3]);

    int (*op_func)(int, int);
    op_func = get_op_func(operator);

    if (op_func == NULL)
    {
        printf("Error\n");
        return 99;
    }

    if (num2 == 0 && (*operator == '/' || *operator == '%'))
    {
        printf("Error\n");
        return 100;
    }

    int result = op_func(num1, num2);
    printf("%d\n", result);

    return 0;
}

