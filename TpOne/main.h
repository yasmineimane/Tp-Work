#ifndef MAIN_H
#define MAIN_H

//header file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Functions Prototype
void remplireTableauAvecEntiersAleatoires(int *tab, int size, int maxValue);
int get_size(void);
void display_array(int *arr, int size);
void selectionSort(int *arr, int size);
void insertionSort(int *arr, int size);
int get_choice(void);
void print_selected_sort(int *arr, int size, int choice);

#endif