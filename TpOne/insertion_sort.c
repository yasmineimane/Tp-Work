#include "main.h"

/**
 * insertionSort - fter comparing elements to the left, shift elements to the right to make room to insert a value
 * @arr: array
 * @size: the size of the array
 * Return: pointer to the array
 */

void insertionSort(int *arr, int size)
{
	int i, pre, temp;

	for (i = 1 ; i < size ; i++)
	{
		temp = 	arr[i];
		pre = i - 1;

		while (pre >= 0 && arr[pre] > temp)
		{
			arr[pre + 1] = arr[pre];
			pre--;
		}
		arr[pre + 1] = temp;
	}
}