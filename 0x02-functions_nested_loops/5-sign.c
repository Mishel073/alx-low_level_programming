#include "main.h"

/**
 * print_sign - checking if the number is +ve, -ve or Zero
 *
 * @n: number to be checked
 *
 * Return: 0 if Zero and 1 if +ve and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
