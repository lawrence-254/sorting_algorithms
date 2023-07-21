#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - a function that sorts an array using bubble sort
 * @array: the array to be sorted
 * @size: size of the data to be sorted
 * Return: sorted array items
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int z;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < (size - 1); x++)
	{
		for (y = 0; y < (size - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				z = array[y];
				array[y] = array[y + 1];
				array[y + 1] = z;
			}
		}
	}
}
