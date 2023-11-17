#include "main.h"

/**
 * selectionSort - search through an array and keep track of the minimum value during each iteration. At the end of each iteration, we swap variables.
 * @arr: array.
 * @size: size of the array.
 */

void selectionSort(int *arr, int size)
{
	int i, j, ind_min, tmp;

	for (i = 0 ; i < size - 1 ; i++)
	{
		ind_min = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (arr[ind_min] > arr[j])
				ind_min = j;
		}
		tmp = arr[i];
		arr[i] = arr[ind_min];
		arr[ind_min] = tmp;
	}
}