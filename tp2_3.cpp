#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>

#define filas 15
int vd[filas];

int main(){
    time_t t;
    srand((unsigned) time(&t));

    int f,c,aux = 0;
    int columnas = rand() % 15 + 5; //Randomizo un numero que sera la cantidad de columnas que tendrá entre 5-15
    int mt[filas][columnas];

    for (f = 0; f < filas; f++)
    {
        for (c = 0; c < columnas; c++)
        {
            mt[f][c] = rand() % 900 + 100; //Introduzco en las columnas numeros randomizados entre 100-999
            printf("%4d   ", mt[f][c]);
        }
        printf("\n");
    }
    
    printf("\n\nPares por fila:\n\n");

    for (f = 0; f < filas; f++)
    {
        aux = 0;
        for (c = 0; c < columnas; c++)
        {
            if (mt[f][c] % 2 == 0)
            {
                aux++; //Contador de Pares
            }  
        }
        printf("Fila %d: %d\n",f + 1,aux);
        vd[f] = aux;    //Rellenado del vector dinamico
    }

    printf("\nVector Dinamico:\n\n");
    for (f = 0; f < filas; f++)
    {
        printf("%d ", vd[f]);
    }
    getchar();
    return 0;
}