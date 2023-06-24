#include "sort.h"

/**
 * bubble_sort - Sorts an array uing the bubble sort algorithm
 *
 * @array: Pointer to the array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int sorted;

	for (i = 0; i < size - 1; i++)
	{
		sorted = 1;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				array[j] ^= array[j + 1];
				array[j + 1] ^= array[j];
				array[j] ^= array[j + 1];
				sorted = 0;
				print_array(array, size);
			}
		}

		if (sorted)
			break;
	}
}
