#include <stdio.h>

void cambiar_posicion(int *n1, int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

void print_array(int vector_entrada[], int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    printf("%d, ", vector_entrada[i]); 
  }
  printf("\n fin del ordenamiento\n");
}

void bubbleSort(int vector_entrada[], int longitud_vector)
{
  int i, j;
  for(i = 0; i < longitud_vector-1; i++)
  {
    for(j = 0; j < longitud_vector-i; j++){
      if(vector_entrada[j] > vector_entrada[j + 1]){
        cambiar_posicion(&vector_entrada[j], &vector_entrada[j+1]);
        print_array(vector_entrada, 10);
      }
    }
  }
}

void bubbleSortDescending(int vector_entrada[], int longitud_vector)
{
  int i, j;
  for(i = 0; i < longitud_vector-1; i++)
  {
    for(j = 0; j < longitud_vector-i; j++){
      if(vector_entrada[j] < vector_entrada[j + 1]){
        cambiar_posicion(&vector_entrada[j], &vector_entrada[j+1]);
      }
    }
  }
}

void insertionSort(int arr[], int n) 
{ 
   int i, currentVal, j; 
   for (i = 1; i < n; i++) 
   { 
       currentVal= arr[i]; //obtenemos el valor actual a comparar
       j = i-1;
  
       /* mueve los elementos del arreglo arr[0..i-1],que son mayores que el valor de la posición actual del recorrido, a una posición adelante de su posición actual */
       while (j >= 0 && arr[j] > currentVal) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       }
       arr[j+1] = currentVal; 
   } 
} 
  

main(int argc, char const *argv[])
{
  int vector_entrada[] = {100, 199, 0, 5, -1, 60, 70, 15, 14, 10};
  int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
  insertionSort(vector_entrada, n);
  print_array(vector_entrada, n);
  printf("\n");
}
