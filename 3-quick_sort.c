#include "sort.h"

/**
 * quick_sort - sort an array by half
 * @array: content of the array
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - function using recursion to move left and right
 * @array: the array
 * @left: pointer to the left
 * @right: pointer to the right
 * @size: size of the array
 */

void _qsort(int *array, int left, int right, size_t size)
{
	int index = partition(array, left, right, size);

	if (left >= right)
		return;

	_qsort(array, left, index - 1, size);
	_qsort(array, index + 1, right, size);
}

/**
 * partition - function that sort by pivot points
 * @array: the array
 * @left: pointer to the left
 * @right: pointer to the right
 * @size: size of the array
 * Return: i
 */
size_t partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left, j = 0;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j && array[i] != array[j])
			{
				swap(array, i, j);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != right && array[i] != array[j])
	{
		swap(array, i, right);
		print_array(array, size);
	}
	return (i);
}
/**
 * swap - swap two indexes
 * @array: the array
 * @left: pointer to the left
 * @right: pointer to the right
 */

void swap(int *array, int left, int right)
{
	array[left] += array[right];
	array[right] = array[left] - array[right];
	array[left] -= array[right];
}
