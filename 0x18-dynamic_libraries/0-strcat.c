#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	for (i = 0; src[i] ; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
