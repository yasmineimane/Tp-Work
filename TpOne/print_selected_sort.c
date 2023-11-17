#include "main.h"

/**
 * print_selected_sort - sort an array and print it according to selected sort.
 * @arr: array.
 * @size: the size of the array.
 * @choice: the user choise.
*/

void print_selected_sort(int *arr, int size, int choice)
{
    if (choice == 0)
    {
        selectionSort(arr, size);
        // display_array(arr, size);
    }
    else if (choice == 1)
    {
        insertionSort(arr, size);
        // display_array(arr, size);
    }
}