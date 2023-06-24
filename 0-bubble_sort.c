#include "sort.h"

/**
 * bubble_sort - Sorts an array uing the bubble sort algorithm
 *
 * @array: Pointer to the array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sorted;

	sorted = 0;

	while (!sorted)
	{
		sorted = issorted(array, size);

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				array[i] ^= array[i + 1];
				array[i + 1] ^= array[i];
				array[i] ^= array[i + 1];
				print_array(array, size);
			}
		}
	}
}

/**
 * issorted - Checks the order of the array
 *
 * @array: The array to check if its swapped
 * @size: The size of the array
 *
 * Returns: 0 if not sorted, 1 if sorted
 */
int issorted(int *array, size_t size)
{
	int ret;
	size_t i;

	for (i = 0; i < size - 2; i++)
	{
		ret = 1;
		if (array[i] > array[i + 1])
		{
			ret = 0;
			break;
		}
	}

	return (ret);
}
