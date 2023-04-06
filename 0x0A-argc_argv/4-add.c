#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Prints sum of all arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *str;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
	str = argv[i];
	length = strlen(str);
	for (j = 0; j < length; j++)
	{
	if (isdigit(*(str + j)) == 0)
	{
		printf("Error\n");
		return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
