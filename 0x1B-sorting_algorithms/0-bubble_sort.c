#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: Pointer to the beginning of an array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int flag = 1, tmp = 0;
	size_t i;

	if (size < 2 || !array)
		return;

	while (flag == 1)
	{
		flag = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
