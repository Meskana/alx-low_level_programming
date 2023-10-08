#include"main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximun integer
 * Return: integer
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
