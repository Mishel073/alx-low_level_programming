#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 *@size: the size of array to be initialized
 *@c: The specific char to intialize the array with.
 *Return:NULL if size = 0 otherwise  a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
