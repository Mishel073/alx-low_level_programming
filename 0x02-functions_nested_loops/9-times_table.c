#include "main.h"

/**
 * times_table - multiplication table
 *
 *
 * Return: void
 */
void times_table(void)
{
	int col, row;

	for (row = 0 ; row < 10 ; row++)
	{
	for (col = 0 ; col < 10 ; col++)
	{
		if (col != 0)
		{
		if ((row * col) < 10)
		{
		_putchar(' ');
		}
		_putchar(' ');
		}
		if (row * col >= 10)
		{
		_putchar('0' + (row * col) / 10);
		_putchar('0' + (row * col) % 10);
		}
		else
		{
		_putchar('0' + (row * col));
		}
		if (col  != 9)
		{
		_putchar(',');
		}
	}
	_putchar('\n');
	}
}
