#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct COMPU{
    int velocidad;  //entre 1 y 3 Gherz
    int anio;   //entre 2000 y 2017
    int cantidad;   //entre 1 y 4
    char tipo_cpu[10];
} PC;

PC crear_PC();
void devolver_PC(PC pc[], int cant);
void carga_PC(PC pc[], int cant);
void lista_PC(PC pc[], int cant);
void vieja_PC(PC pc[], int cant);
void veloz_PC(PC pc[], int cant);

int main(){
    srand(time(NULL));      // Randomiza siempre al ser ejecutado el programa

    int cant;

    printf("Cantidad de PC: \n");
    scanf("%d", &cant);
    PC pc[cant];

    carga_PC(pc, cant);
    lista_PC(pc, cant);
    devolver_PC(pc, cant);
    vieja_PC(pc, cant);
    veloz_PC(pc, cant);

    getchar();
    getchar();
    return 0;
}

 PC crear_PC(){
    PC pc;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    pc.velocidad = rand() % 3 + 1;
    pc.anio = rand() % 18 + 2000;
    pc.cantidad = rand() % 4 + 1;
    strcpy (pc.tipo_cpu, tipos[rand() % 6]);    //Randomiza en el array
    return pc;
}

void devolver_PC(PC pc[], int cant){
    int aux = rand() % cant;

    printf("////PC RANDOM//// \n\n");
    printf("PC velocidad: %d\n", pc[aux].velocidad);
    printf("PC anio: %d\n", pc[aux].anio);
    printf("PC cant_nucleos: %d\n", pc[aux].cantidad);

    printf("PC tipo CPU: \n");
    puts(pc[aux].tipo_cpu);
    printf("\n");
}

void carga_PC(PC pc[], int cant){
    for(int i = 0; i < cant; i++){
        PC PC = crear_PC();
        pc[i] = PC;
    }
}

void lista_PC(PC pc[], int cant){
    printf("////LISTA DE PC//// \n\n");
    for(int i = 0; i < cant; i++){
        printf("velocidad: %d\n", pc[i].velocidad);
        printf("anio: %d\n", pc[i].anio);
        printf("cant_nucleos: %d\n", pc[i].cantidad);

        printf("tipo CPU: \n");
        puts(pc[i].tipo_cpu);
        printf("\n");
    }
}

void vieja_PC(PC pc[], int cant){
    int vieja = 2018;
    int aux;

    for (int i = 0; i < cant; i++){
        if (vieja > pc[i].anio){
            vieja = pc[i].anio;
            aux = i;    //Guarda el valor de I para luego poder escribir la que es mas vieja
        }
    }

    printf("////PC MAS VIEJA//// \n\n");
    printf("velocidad: %d\n", pc[aux].velocidad);
    printf("anio: %d\n", pc[aux].anio);
    printf("cant_nucleos: %d\n", pc[aux].cantidad);

    printf("tipo CPU: \n");
    puts(pc[aux].tipo_cpu);
    printf("\n");
}

void veloz_PC(PC pc[], int cant){
    int veloz = 0;
    int aux;

    for (int i = 0; i < cant; i++){
        if (veloz < pc[i].anio){
            veloz = pc[i].anio;
            aux = i;
        }
    }

    printf("////PC MAS VELOZ//// \n\n");
    printf("velocidad: %d\n", pc[aux].velocidad);
    printf("anio: %d\n", pc[aux].anio);
    printf("cant_nucleos: %d\n", pc[aux].cantidad);

    printf("tipo CPU: \n");
    puts(pc[aux].tipo_cpu);
    printf("\n");
}