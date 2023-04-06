#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of command line argument
 * @argv: name of the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);

	return (0);
}
