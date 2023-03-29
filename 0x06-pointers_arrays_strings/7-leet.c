#include "main.h"

/**
 * leet - encode string in 1337
 * @str: string to be encoded
 * Return: char * of the string encoding.
 */

char *leet(char *str)
{
	int i = 0;

	int j = 0;

	char from_array[] = {'a', 'e', 'o', 't', 'l'};

	char to_array[] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == from_array[j] || str[i] == from_array[j] - 32)
				str[i] = to_array[j];
		}
		i++;
	}
	return (str);
}
