#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @str: string to be converted
 * Return: char * of the string in upper case
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
