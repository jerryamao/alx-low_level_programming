#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the remaining days in the year, given a date
 * @month: the month (1-12)
 * @day: the day of the month (1-31)
 * @year: the year (>= 1900)
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int remaining_days = 0;
	int i;

	/* Check if the year is a leap year */
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_month[1] = 29;  /* February has 29 days in a leap year */
	}

	/* Check if the date is valid */
	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
	{
		printf("Invalid date\n");
		return;
	}

	/* Calculate remaining days in the year */
	for (i = month; i <= 12; i++)
	{
		if (i == month)
		{
			remaining_days += days_in_month[i - 1] - day;
		}
		else
		{
			remaining_days += days_in_month[i - 1];
		}
	}

	/* Print remaining days */
	printf("Remaining days in the year: %d\n", remaining_days);
}
