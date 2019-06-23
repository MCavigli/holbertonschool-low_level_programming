#include "sort.h"
/**
 *
 */

void merge_sort(int *array, size_t size)
{
        size_t i;
	int *tmp_arr = NULL;

	if (!array || size < 2)
		return;
	tmp_arr = malloc(size * sizeof(int));
	if (!tmp_arr)
		return;
	for (i = 0; i < size; i++)
		tmp_arr[i] = array[i];
	split(array, tmp_arr, 0, size); /* Put in -1 on size */
	free(tmp_arr);
}

/**
 *
 */

void split(int *array, int *tmp_arr, size_t left, size_t right)
{
	int middle;

	if (right - left < 2)
		return;
	middle = (left + right) / 2;
/*
  if ((left + right) % 2 == 0)
  middle--;
*/
	split(array, tmp_arr, left, middle);
	split(array, tmp_arr, middle, right);
	combine(array, tmp_arr, left, middle, right);
}

/**
 *
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
