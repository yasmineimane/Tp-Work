#include "main.h"

/**
 * remplireTableauAvecEntiersAleatoires - Function that fills an array with integer values.
 * @tab: array.
 * @size: the size of the array.
 * @maxValue: the max value of the elements of an array.
*/

void remplireTableauAvecEntiersAleatoires(int *tab, int size, int maxValue)
{
    int i;

    for (i = 0 ; i < size ; i++)
    {
        tab[i] = (int)(rand() / ((double)RAND_MAX + 1) * maxValue);
    }
}