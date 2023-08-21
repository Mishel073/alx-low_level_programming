#include "main.h"

/**
 * *_strncat - concatenate the n characterss @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * @n: number of characters
 * Return:pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
