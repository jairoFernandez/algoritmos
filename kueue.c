#include<stdio.h>
#define SIZE 5

int values[SIZE], front = -1, rear = -1;

void enQueue(int value) {
  /*Revisar ke halla espacios en array */
  if(rear == SIZE - 1)
    printf("Nuestro Queue esta lleno \n");
  else {
    if(front == -1) 
      front = 0;
    rear++;
    values[rear] = value;
    printf("Se insertó el valor %d correctamente \n", value);
  }
}

void deQueue(){
  if(front == -1) {
    printf("Nuestro Queue esta vacio \n");
  } else {
    printf("Se eliminó el valor %d \n", values[front]);
    front++;
    if(front > rear) {
      front = rear = -1;
    }else
    {
      rear--;
    }
  }
}

int main(int argc, char const *argv[])
{
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  printf("front: %d\n", front);
  printf("rear: %d\n", rear);
  deQueue();
  printf("front: %d\n", front);
  printf("rear: %d\n", rear);

  enQueue(6);
  enQueue(8);
  deQueue();
  enQueue(8);
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  enQueue(9);
  return 0;
}

