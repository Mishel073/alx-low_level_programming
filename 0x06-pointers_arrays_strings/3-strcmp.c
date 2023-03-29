#include "main.h"

/**
 * *_strcmp - compare @s1 to @s2
 * @s1: 1st string
 * @s2: 2nd string
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	diff = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
