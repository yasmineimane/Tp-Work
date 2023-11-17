#include "main.h"

/**
 * get_choice - Function that gets the choice from the user.
 * @Return: The choice.
*/

int get_choice(void)
{
    int choice;

    do
    {
        printf("Please Make a Choice \n");
	    printf("    0_Selection Sort    \n");
	    printf("    1_Insertion Sort    \n");
	    printf("Your Choice : ");
	    scanf("%d", &choice);
    } while (choice != 0 && choice != 1);
    
    
    return (choice);
}