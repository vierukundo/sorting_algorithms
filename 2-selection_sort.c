#include "sort.h"
/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array of integers to sort
 * @size: array size
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_num_index;
	int temp;

	for (i = 0; i < size; i++)
	{
		min_num_index = i;
		for (j = i; j < size - 1; j++)
		{
			if (array[j + 1] < array[min_num_index])
				min_num_index = j + 1;
		}
		if (min_num_index != i)
		{
			temp = array[i];
			array[i] = array[min_num_index];
			array[min_num_index] = temp;
			print_array(array, size);
		}
	}
}
