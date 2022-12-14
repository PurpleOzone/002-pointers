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
            if (*(collection + j) > *(collection + j + 1))
            {
             int aux = *(collection + j + 1);
             *(collection + j+ 1) = *(collection + j);
             *(collection+ j ) = aux;
             contador ++;
            }

        }

    }
  return contador;
}

void insertion_sort(int *collection, int count)
{
    for(int i = 0; i < count; i++)
    {
        int position = i;
        int temp = *(collection + i);

        while((position > 0) && (temp < *(collection + position - 1)))
        {
            *(collection + position) =  *(collection + position - 1);
            position --;
        }
        *(collection + position) = temp;
    }
    show_Array(collection,count);

}

void reverse(int *collection, int count)
{
    for (int i = 0; i < count/2; i++)
    {
        int temp = *(collection + i);
        *(collection + i) = *(collection + count -i -1);
        *(collection + count - i- 1) = temp;
    }
    show_Array(collection,count);
}

int calulate_frequency(int *collection, int count, int target)
{
    int frequency = 0;
    for (int i = 0; i < count; i++)
    {
        if(*(collection + i) == target)
        {
            frequency++;
        }

    }
    return frequency;
}
void show_Array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t",*(array + i ));
    }
}