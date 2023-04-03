#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * Return: Returns the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, bytes;

	bytes = 0;

	while(*s)
	{
		for (i=0; accept[i] >= '\0' ; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept [i] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
