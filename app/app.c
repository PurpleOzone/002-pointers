#include "pointers.h"
int main(void)
{
    int no_order_vector[7] = {55,89,58,5,1025,8,6};
    int *vector_ptr = &no_order_vector[0];

    //Metodo de burbuja
    int changes = bubble_sort(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
    printf("%d intercambios para ordenar el arreglo con el metodo de burbuja.\n",changes);
    show_Array(no_order_vector,sizeof(no_order_vector)/sizeof(no_order_vector[0]) );

    //Metodo de inserción
    

    return 0;
}
