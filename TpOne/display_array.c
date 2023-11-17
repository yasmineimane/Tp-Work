#include "main.h"

/**
 * display_array - function that displays an array.
 * @arr: array.
 * @size: the size of the array.
*/

void display_array(int *arr, int size)
{
    int i;

    for (i = 0 ; i < size ; i++)
        printf("%d\t", arr[i]);
}