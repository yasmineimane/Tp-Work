#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Liste.h"

/**
 * main - main function.
 * Return: 0.
*/

int main()
{
    int i, alea, size, choice, r;
    Liste lili, lala;

    // srand(time(NULL));

    initialise(&lili);

    /* Remplissage de lili : test de ajoutEnTete et ajoutEnQueue */
    printf("Enter the number of nodes that u want to create : ");
    scanf("%d", &size);
    printf("Press 1 if u want to add in the beginning\n");
    printf("Press 2 if u want to add in the end\n");
    printf("Your Choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        for (i = 0 ; i < size ; i++)
        {
                printf("Enter the data for the node %d : ", i+1);
                scanf("%d", &alea);
                ajoutEnTete(alea, &lili);
        }
    }
    else if (choice == 2)
    {
        for (i = 0 ; i < size ; i++)
        {
                printf("Enter the data for the node %d : ", i+1);
                scanf("%d", &alea);
                ajoutEnQueue(alea, &lili);
        }
    }

    /* Creation d'une copie de lili */
    affectation(&lala, &lili);

    /* Modification de lili */
    /* Insert en Tete */
    printf("Enter the data that u want to insert in the beginning : ");
    scanf("%d", &alea);
    insererElement(alea, &lili, 0);

    /* Insert en Queue */
    printf("Enter the data that u want to insert in the end : ");
    scanf("%d", &alea);
    insererElement(alea, &lili, nbElements(&lili));

    /* Insert en position 3*/
    printf("Enter the data that u want to insert : ");
    scanf("%d", &alea);
    insererElement(alea, &lili, 3);

    /* Printing lili after insertion*/
    affichageListeGaucheDroite(&lili);

    /* Printing lala */
    affichageListeGaucheDroite(&lala);


    /* Recherches dans lili */

    printf("Enter the data that u want search for : ");
    scanf("%d", &alea);
    r = rechercheElement(alea, &lili);

    if (r == -1)
        printf("Not Found");
    else
        printf("Found in position %d", r);

    return (0);
}