#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array of integers
 * @size: size
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, sorted;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		sorted = 1;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				sorted = 0;
				print_array(array, size);
			}
		}
		if (sorted)
			break;
	}
}
