#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5

int f,c;
double mt[N][M];

int main(){
    double *pntMt = &mt[0][0];
    float aux = 1;

    //Rellenado de la Matriz
    for(f = 0; f<N; f++){
        for(c = 0; c<M; c++){
            mt[f][c] = aux;
            aux += 1.25;
        }
    }

    //Recorrido de la Matriz
     for (f = 0; f < N; f++){
        for (c = 0; c < M; c++){
            printf("%.2lf  ", *(pntMt++) );
        }
        printf("\n"); //Para ordenar entre las dimensiones
    }

    getchar(); //Pausa el programa
    return 0;
}

