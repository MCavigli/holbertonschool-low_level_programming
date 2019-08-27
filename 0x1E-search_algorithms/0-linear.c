#include "search_algos.h"
/**
 * linear_search - searches for a value in an array with linear search
 * @array: pointer to array to search
 * @size: number of elements in @array
 * @value: value to search for
 * Return: first index where @value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] != value)
			i++;
		else
			return (i);
	}
	return (-1);
}
