#include "sort.h"

/**
 * bubble_sort - sort an array in ascending ord using the bubble_sort alg
 * @array: content of the array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sort = 1;

	if (size < 2)
		return;

	while (sort == 1)
	{
		sort = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				array[i] += array[i + 1];
				array[i + 1] = array[i] - array[i + 1];
				array[i] -= array[i + 1];
				print_array(array, size);
				sort = 1;
			}
		}
	}
}
