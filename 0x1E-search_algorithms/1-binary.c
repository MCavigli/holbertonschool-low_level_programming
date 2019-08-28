#include "search_algos.h"
/**
 * binary_search - searches for value in array using binary search
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to search for
 * Return: index where @value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (!array)
		return (-1);
	return (rec_bs(array, size, value, low, high));
}

/**
 * rec_bs - recursive function to find value
 * @array: pointer to array to search
 * @size: size of array
 * @value: value to search for
 * @low: low position
 * @high: high position
 * Return: index where @value is located
 */

int rec_bs(int *array, size_t size, int value, int low, int high)
{
	int i;
	int mid = (high + low) / 2;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	if (array[mid] == value)
		return (mid);
	if (low == high)
		return (-1);
	if (array[mid] > value)
		return (rec_bs(array, size, value, low, mid - 1));
	else
		return (rec_bs(array, size, value, mid + 1, high));
}
