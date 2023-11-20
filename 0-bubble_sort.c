#include "sort.h"

/**
 * bubble_sort - function to operate bubble sorts on an array
 * of integers in ascending order
 *
 * @array: arrray of integers to sort
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len;
	int tmp, swap;

	for (len = size, swap = 1; len > 0 && swap; len--)
	{
		swap = 0;
		for (i = 0; (i + 1) < len; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
