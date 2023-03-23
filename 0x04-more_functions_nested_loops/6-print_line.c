#include "main.h"

/**
 * print_line - prints _ for n times
 * @n: number of times to print _
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
