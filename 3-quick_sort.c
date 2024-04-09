#include "sort.h"
/**
 * split_arr - divides array into two partitions
 * @array: Array
 * @start: Start
 * @end: End
 * @size: Size
 *
 * Return: Final
 */

int split_arr(int *array, int start, int end, size_t size)
{
	int i = 0;
	int k = 0;
	int a = 0;
	int b = 0;

	a = array[end];
	i = start;

	for (k = start; k < end; k++)
	{
		if (array[k] < a)
		{
			b = array[i];
			array[i] = array[k];
			array[k] = b;

			if (b != array[i])
				print_array(array, size);
			++i;
		}
	}
	b = array[i];
	array[i] = array[end];
	array[end] = b;

		if (b != array[i])
			print_array(array, size);
		return (i);
}

/**
 * sort - Sorts array in asc
 * @array: Array
 * @start_index: Start
 * @end_index: End
 * @size: Size
*/
void sort(int *array, int start_index, int end_index, size_t size)
{
	int i;

	if (start_index >= end_index || start_index < 0)
	return;

	i = split_arr(array, start_index, end_index, size);
	sort(array, start_index, i - 1, size);
	sort(array, i + 1, end_index, size);
}

/**
 * quick_sort - Sorts array in asc
 * @array: Array
 * @size: Size
*/
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
