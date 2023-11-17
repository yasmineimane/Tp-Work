#include "main.h"

/**
 * get_size - Function that gets the size of an array.
 * Return: The size of the array.
*/

int get_size(void)
{
    int size;

    do
    {
        printf("Please enter a positive number for the size of the array : ");
        scanf("%d", &size);
    } while (size <= 0);

    return (size);
}