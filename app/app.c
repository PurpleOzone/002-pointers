// Implemented by: $Héctor Aguilar Gómez$
#include "pointers.h"
int main(void)
{
    int no_order_vector[7] = {55,55,206,985,989,851,5};
    int *vector_ptr = &no_order_vector[0];

    //Metodo de burbuja
    /*
   int changes = bubble_sort(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
   printf("%d intercambios para ordenar el arreglo con el metodo de burbuja.\n",changes);
   show_Array(no_order_vector,sizeof(no_order_vector)/sizeof(no_order_vector[0]) );
   printf("\n");
    */
   //Metodo de inserción


  insertion_sort(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
  printf("\n Observamos el cambio en el arreglo original\n");
  show_Array(no_order_vector, 7);


  //Método reverse
   /*
 reverse(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]));
 printf("\n Observamos el cambio en el arreglo original\n");
 show_Array(no_order_vector, 7);
   */

   //Frequency
    /*
  int target = 55;
  int how_many  =calulate_frequency(vector_ptr,sizeof(no_order_vector)/sizeof(no_order_vector[0]), 55);
  printf("La frecuencia de %d en el arreglo fue de: %d", target, how_many);
    */
return 0;
}
