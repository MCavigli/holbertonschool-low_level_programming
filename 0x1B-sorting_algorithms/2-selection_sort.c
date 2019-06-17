#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm
 *
 * @array: pointer to integer array
 * @size: size of array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int flag = 0, tmp = 0, place = 0;
	size_t i, j;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		tmp = 0;
		for (j = i + 1; j < size; j++)
		{
			if (!flag && array[j] < array[i])
			{
				tmp = array[j];
				place = j;
				flag = 1;
			}
			if (flag && array[j] < tmp)
			{
				tmp = array[j];
				place = j;
			}
		}
		if (flag)
		{
			array[place] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
