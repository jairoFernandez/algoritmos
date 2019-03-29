#include<stdio.h>
#define SIZE 5

void enQueue(int value) {
  /*Revisar ke halla espacios en array */
  if(rear == SIZE - 1)
    printf("Nuestro Queue esta lleno \n");
  else {
    if(front == -1) 
      front = 0;
    rear++;
    values[rear] = value;
    printf("Se insertó el valor %d correctamente", value);
  }
}

void deQueue(){
  if(front == -1) {
    printf("Nuestro Queue esta vacio \n");
  } else {
    /* code */
    printf("Se eliminó el valor %d", values[front]);
    front++;
    
  }
}

