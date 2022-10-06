#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integer ordered
 * from min to max
 * @min: The first valuse of the array
 * @max: The last valuse of the array
 * Return: If min > max or the function fails - NULL
 * otherwise - a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
