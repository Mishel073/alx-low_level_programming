#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, times;

	for (times = 0; times < 10 ; times++)
	{
	for (i = 0 ; i <= 14 ; i++)
	{
		if (i >= 10)
		{
		_putchar('0' + i / 10);
		}
		_putchar('0' + i % 10);
	}
	_putchar('\n');
	}
}
