#include "sort.h"

/**
 * selection_sort - sort an array in ascending ord using the selection_sort alg
 * @array: content of the array
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, swap = 0, idx = 0;
	int comp = 0;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		comp = array[i];
		swap = i;
		for (idx = i; idx < size; idx++)
		{
			if (array[idx] < comp)
			{
				swap = idx;
				comp = array[idx];
			}
		}
		if (swap != i)
		{
			array[i] += array[swap];
			array[swap] = array[i] - array[swap];
			array[i] -= array[swap];
			print_array(array, size);
		}
	}
}
