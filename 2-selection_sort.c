#include "sort.h"
/**
 * selection_sort - Finds minimum number
 * @array: List
 * @size: Numbers
 *
 */

void selection_sort(int *array, size_t size)
{
	int i;
	size_t t, k, index;
	bool swap;

	/* Outer loop iterates through each element */
	for (t = 0; t < (size - 1); t++)
	{
		swap = false;
		index = t;

		/* Inner loop finds the minimum element */
		for (k = (t + 1); k < size; k++)
		{
			/* If a smaller element is found, update index and swap */
			if (array[k] < array[index])
			{
				swap = true;
				index = k;
			}
		}

		/* Swap the current element with the minimum element */
		i = array[t];
		array[t] = array[index];
		array[index] = i;

		/* If a swap was made, print the array */
		if (swap == true)
			print_array(array, size);
	}
}
