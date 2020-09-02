/* 1..Crear un pointer para saber que hay en front y rear
2....Colocar estos valores en -1 al inicializar
3....Incrementar en 1 el valor de “rear” cuando agregamos un elemento
4....Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front a usar dequeue.
5....Antes de agregar un elemento revisar si hay espacios
6....Antes de remover un elemento revisamos que existan elementos
7....Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1
8....Agregar el valor de 0 a front al hacer nuestro primer enqueue */


#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;

void enQueue(int value)
{
    if(rear == SIZE-1)
        printf("Our Queue is full\n");
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("The value %i has been inserted correctly\n", value);
    }

}

void deQueue()
{
    if(front == -1)
        printf("Our Queue is empty\n");
    else
    {
        printf("The value %i has been deleted\n", items[front]);
        front++;
        if(front > rear)
        front = -1;
        rear = -1;
    }
    
}

int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    enQueue(10);

    return 0;
}