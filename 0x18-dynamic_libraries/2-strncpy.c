#include "main.h"

/**
 * *_strncpy - copy the n characterss @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * @n: number of characters
 * Return:pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
