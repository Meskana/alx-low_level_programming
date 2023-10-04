nclude "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of coluns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **result, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j <= height; j++)
			{
				free(result[j]);
			}
