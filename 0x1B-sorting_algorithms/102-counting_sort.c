#include "sort.h"
/**
 * counting_sort - Uses the counting sort alogrithm to put an array into order
 * @array: Pointer to the unsorted array
 * @size: Size of the unsorted array
 *
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	int *counting_array = NULL, *tmp_array = NULL;
	int i = 0, j = 0, spot = 0, max = array[0];

	if (!array || size < 2)
		return;
	for (i = 0; array[i]; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	counting_array = malloc((max + 1) * sizeof(int));
	tmp_array = malloc(size * sizeof(int));
	if (!counting_array || !tmp_array)
		return;
	for (i = 0; i < max + 1; i++)
		counting_array[i] = 0;
	for (i = 0; array[i]; i++)
		counting_array[array[i]] += 1;
	for (i = 0, spot = 0; i < max + 1; i++)
	{
		spot += counting_array[i];
		counting_array[i] = spot;
	}
	print_array(counting_array, 100);
	for (spot = 0, i = 0; i < max + 1; i++)
	{
		if (spot < counting_array[i])
		{
			tmp_array[j] = i;
			spot++;
			j++;
		}
	}
	for (i = 0; array[i]; i++)
		array[i] = tmp_array[i];
	free(tmp_array);
	free(counting_array);
}
