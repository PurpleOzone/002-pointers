// Implemented by: $Héctor Aguilar Gómez$
#include "pointers.h"
int main(void)
{
    int no_order_vector[7] = {55, 55,23,1,5894,5,2};
    int *vector_ptr = &no_order_vector[0];

    //Metodo de burbuja


     int changes = bubble_sort(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
    printf("%d intercambios para ordenar el arreglo con el metodo de burbuja.\n",changes);
    show_Array(no_order_vector,sizeof(no_order_vector)/sizeof(no_order_vector[0]) );
    printf("\n\n");


    //Metodo de inserción


   insertion_sort(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
   printf("\n Observamos el cambio en el arreglo original\n");
   show_Array(no_order_vector, sizeof(no_order_vector)/sizeof(no_order_vector[0]));
   printf("\n\n");



  //Método reverse


   reverse(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
   printf("\n Observamos el cambio en el arreglo original\n");
   show_Array(no_order_vector, sizeof(no_order_vector)/sizeof(no_order_vector[0]));
   printf("\n\n");


     //Frequency

    int target = 55;
    int how_many  = calulate_frequency(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]), target);
    printf("La frecuencia de %d en el arreglo fue de: %d", target, how_many);


return 0;
}
