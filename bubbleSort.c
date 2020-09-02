/* 1. Comenzamos a hacer la comparacion de elementos adyacentes.
2. Repetimos hasta tener una pasada completa sin ningun swap. */


#include <stdio.h>
#include <stdlib.h>

void change_pos(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], int n)
{
    int i, j;
    for(i=0; i < n-1; i++)
    {
        for(j=0; j < n-i-1; j++)
        {
            //[10,5,3,3333]
            if(vector_entrada[j]>vector_entrada[j+1])
            change_pos(&vector_entrada[j],&vector_entrada[j+1]);
        }
    }
}

int print( int vector_entrada[], int n)
{
    int i;
    for(i=0; i<n; i++)
    printf("%i  ,", vector_entrada[i]);
    printf("\n Fin del ordenamiento");
    
    return 0;
}

int main()
{
    int vector_entrada[]={100, 1992, 0, 5, -1, 60, 70, 15, 14};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
    bubbleSort(vector_entrada, n);
    print(vector_entrada, n);
    printf("\n");

    return 0;
}