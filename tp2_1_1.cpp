#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 4
#define M 5

int main(){
    int f,c;
    double mt[N][M];
    for(f = 0;f<N; f++){
        for(f = 0;f<N; f++){
            cprintf("%lf ", mt[f][c]);
        }
        cprintf("\n");
    }
    return 0;
}

