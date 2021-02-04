#include "sort.h"

/**
 * shell_sort - sorts an array with the shell sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 0, f = 0, check = 0;
	int tmp = 0;

	while (f < size)
		f = f * 3 + 1;

	f = (f - 1) / 3;

	while (f > 0)
	{
		check = 0;
		for (i = 0; i + f < size; i++)
		{
			if (array[i] > array[i + f])
			{
				tmp = array[i];
				array[i] = array[i + f];
				array[i + f] = tmp;
				check = 1;
			}
		}
		if (check == 0)
		{
			f = (f - 1) / 3;
			print_array(array, size);
		}
	}
}
