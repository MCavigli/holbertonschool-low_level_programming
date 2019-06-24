#include "sort.h"

/**
 * merge_sort - Function that sends code off to be merge recursively, creates
 * new array to work with
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: Nothing
 */

void merge_sort(int *array, size_t size)
{
	size_t i;;
	int *tmp_arr = NULL;

	if (!array || size < 2)
		return;
	tmp_arr = malloc(size * sizeof(int));
	if (!tmp_arr)
		return;
	for (i = 0; i < size; i++)
		tmp_arr[i] = array[i];
	split(array, tmp_arr, 0, size);
	free(tmp_arr);
}

/**
 * split - Recursive function that splits the array
 * @array: Original array
 * @tmp_arr: Copy of original array
 * @left: Beginning of array
 * @right: End of array
 *
 * Return: Nothing
 */

void split(int *array, int *tmp_arr, size_t left, size_t right)
{
	int middle;

	if (right - left < 2)
		return;
	middle = (left + right) / 2;

	split(array, tmp_arr, left, middle);
	split(array, tmp_arr, middle, right);
	combine(array, tmp_arr, left, middle, right);
}

/**
 * combine - Function that prints and changes values of variables
 * @array: Original array
 * @tmp_arr: Copy of original array
 * @left: Beginning of array
 * @middle: Middle of array
 * @right: End of array
 *
 * Return: Nothing
 */

void combine(int *array, int *tmp_arr, size_t left, size_t middle,
	     size_t right)
{
	size_t l = left,  m = middle, i = 0;

	printf("Merging...\n");
	printf("[left]: ");
	for (i = left; i < middle; i++)
	{
		if (i < middle - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	printf("[right]: ");
	for (i = middle; i < right; i++)
	{
		if (i < right - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	for (i = left; i < right; i++)
	{
		if (l < middle && (m >= right || array[l] <= array[m]))
		{
			tmp_arr[i] = array[l];
			l++;
		}
		else
		{
			tmp_arr[i] = array[m];
			m++;
		}
	}
	printf("[Done]: ");
	for (i = left; i < right; i++)
		if (i < right - 1)
			printf("%d, ", tmp_arr[i]);
		else
			printf("%d\n", tmp_arr[i]);


}
