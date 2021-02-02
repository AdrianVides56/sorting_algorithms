#include "sort.h"

/**
 * selection_sort - sort an array with selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int current = 0, tmp = 0, check = 0;
	size_t i = 0, j = 0, sidx = 0;

	for (i = 0; i < size; i++)
	{
		current = array[i];
		check = 0;
		tmp = max_int(array, size);
		for (j = i; j < size; j++)
		{
			if (array[j] < array[i] && array[j] < tmp)
			{
				tmp = array[j];
				check = 1;
				sidx = j;
			}
		}
		if (check == 1)
		{
			array[i] = tmp;
			array[sidx] = current;
			print_array(array, size);
		}
	}
}

int max_int(int *array, size_t size)
{
	int max = 0;
	size_t idx = 0;

	for (idx = 0; idx < size; idx++)
	{
		if (array[idx] > max)
			max = array[idx];
	}
	return (max);
}
