//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $Héctor Aguilar Gómez$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    int contador = 0;
    for(int i = 0; i < count -1; i++)
    {
        for(int j = 0; j < count -1 -i; j ++)
        {
            if (collection[j] > (collection[j+1]))
            {
                int *ptr_a = &collection[j];
                int *ptr_b = &collection[j+1];

                int temp = *ptr_b;
                *ptr_b = *ptr_a;
                *ptr_a = temp;
                contador ++;
            }

        }

    }
  return contador;
}

void insertion_sort(int *collection, int count)
{

}

void reverse(int *collection, int count)
{

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
void show_Array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t",array[i]);
    }
}