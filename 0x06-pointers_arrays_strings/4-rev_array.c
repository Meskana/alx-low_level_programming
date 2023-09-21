#include "main.h"


/**
 * reverse_array - reverses n bytes of an array of integers
 * @a: pointer variable
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, holder = 0;

	while (end > start)
	{
		holder = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = holder;
		start++;
		end--;
	}
}
