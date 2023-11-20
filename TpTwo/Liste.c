#include <stdio.h>
#include <stdlib.h>
#include "Liste.h"

void initialise(Liste *l)
{
    l->prem = NULL;
    l->last = NULL;
}

int estVide(const Liste *l)
{
    if (l->prem == NULL && l->last == NULL)
        return (1);
    else
        return (0);
}

unsigned int nbElements(const Liste *l)
{
    int i = 0;
    Cellule *ptr;

    if (estVide(l))
        i = 0;
    else
    {
        ptr = l->prem;
        while (ptr != l->last->suivant)
        {
            ptr = ptr->suivant;
            i++;
        }
    }

    return (i);
}

void affichageListeGaucheDroite(const Liste *l)
{
    Cellule *ptr;

    if (estVide(l))
        printf("Empty Liste");
    else
    {
        ptr = l->prem;
        while (ptr != l->last->suivant)
        {
            printf("%d\t", ptr->info);
            ptr = ptr->suivant;
        }
    }
    printf("\n");
}

void affichageListeDroiteGauche(const Liste *l)
{
    Cellule *ptr;

    if (estVide(l))
        printf("Empty List");
    else
    {
        ptr = l->last;
        while (ptr != l->prem->precedent)
        {
            printf("%d\t", ptr->info);
            ptr = ptr->precedent;
        }
    }
    printf("\n");
}

void ajoutEnTete(int e, Liste *l)
{
    Cellule *new;

    new = (Cellule *)malloc(sizeof(Cellule));
    new->info = e;
    new->precedent = NULL;
    new->suivant = NULL;

    if (estVide(l))
    {
        l->prem = new;
        l->last = new;
    }
    else
    {
        l->prem->precedent = new;
        new->suivant = l->prem;
        l->prem = new;
    }
}

void ajoutEnQueue(int e, Liste * l)
{
    Cellule *new;

    new = (Cellule *)malloc(sizeof(Cellule));
    new->info = e;
    new->precedent = NULL;
    new->suivant = NULL;

    if (estVide(l))
    {
        l->last = new;
        l->prem = new;
    }
    else
    {
        l->last->suivant = new;
        new->precedent = l->last;
        l->last = new;
    }
}

void suppressionEnTete(Liste *l)
{
    Cellule *ptr;

    if (estVide(l))
        printf("Empty Liste");
    else
    {
        ptr = l->prem;
        l->prem = l->prem->suivant;
        l->prem->precedent = NULL;
        free(ptr);
    }
}

void videListe(Liste * l)
{
    if (estVide(l))
        printf("Empty Liste");
    
    while (l->prem->suivant != NULL)
    {
        l->prem = l->prem->suivant;
        free(l->prem->precedent);
    }
    free(l->prem);
}

void affectation(Liste * l1, const Liste * l2)
{
    Cellule *ptr;

    ptr = l2->prem;
    initialise(l1);

    while (ptr != l2->last->suivant)
    {
        ajoutEnQueue(ptr->info, l1);
        ptr = ptr->suivant;
    }
}

int rechercheElement(int e, const Liste *l)
{
    int i = 0;
    Cellule *ptr;

    if (estVide(l))
        printf("Empty Liste");

    if (l->prem->info == e)
        i = 0;
    else
    {
        ptr = l->prem;
        while (ptr != l->last->suivant && ptr->info != e )
        {
            ptr = ptr->suivant;
            i++;
        }
        if (ptr == NULL)
        {
            i = -1;
        }
        
    }

    return (i);
}

void insererElement(int e, Liste * l, unsigned int position)
{
    Cellule *new, *ptr1, *ptr2;
    unsigned int i = 0;

    if (estVide(l))
        printf("Empty Liste");

    if (position == 0)
    {
        ajoutEnTete(e, l);
        return;
    }
    else if (position == nbElements(l))
    {
        ajoutEnQueue(e, l);
        return;
    }
    else
    {
        ptr1 = ptr2 = l->prem;
        new = (Cellule *)malloc(sizeof(Cellule));
        new->info = e;
        new->precedent = NULL;
        new->suivant = NULL;

        while (i < position && ptr1 != l->last->suivant)
        {
            i++;
            ptr2 = ptr1;
            ptr1 = ptr1->suivant;
        }
        ptr2->suivant = new;
        new->precedent = ptr2;
        ptr1->precedent = new;
        new->suivant = ptr1;
    }
}