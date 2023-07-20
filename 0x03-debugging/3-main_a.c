#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
    int month;
    int day;
    int year;
    int is_leap_year;

    month = 4;
    day = 1;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    is_leap_year = check_leap_year(year);
    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

int check_leap_year(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
