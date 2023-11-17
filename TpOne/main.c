#include "main.h"

/**
 * main - main function
 * 
 * Return: 0
*/

int main(void)
{
    int *arr, size, choice;
    clock_t start = clock();

    size = get_size();//get the size of the array

    arr = malloc(sizeof(int *) * size);//allocate memory for the array

    if (arr == NULL)
    {
        printf("Memory can't be allocated");
        return (-1);
    }
    //fill the array
    remplireTableauAvecEntiersAleatoires(arr, size, 10000);

    choice = get_choice();//get the choice from the user

    //print the array
    print_selected_sort(arr, size, choice);

    free(arr);
    clock_t finish = clock();

    //print how much time take the program to execute
    printf("\nIt took %d secondes to execute the program.\n",(finish - start) / CLOCKS_PER_SEC);

    return (0);
}