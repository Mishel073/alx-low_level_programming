#include <stdio.h>

/**
 * main - Fizz Buzz code
 *
 * Return: void
 */

int main(void)
{
	int i, flag;

	for (i = 1; i <= 100; i++)
	{
		flag = 1;

		if (i % 3 == 0)
		{
			printf("Fizz");
			flag = 0;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			flag = 0;
		}
		if (flag)
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
