#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers
 * @array: List
 * @size: Number of entries
*/

void bubble_sort(int *array, size_t size)
{
		int i;
		size_t t;
		bool bubble = false;

		while (bubble == false)
		{
			bubble = true;
				for (t = 0; t < (size - 1); t++)
			{
						if (array[t] > array[t + 1])
						{
								bubble = false;
								i = array[t];
								array[t] = array[t + 1];
								array[t + 1] = i;
								print_array(array, size);
						}
			}
		}
}
