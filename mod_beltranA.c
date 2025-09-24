//********************************************************************
//Alejandro Beltrán Huertas
//24 09 2025
//Sistemas opertivos
//Teoria del Rendimiento
//********************************************************************

#include <stdio.h>
#include <stdlib.h>
#include "modulo.h" //importamos las funciones y varables del modulo

//Inicio del main
int main(int argc, char *argv[]) {
//se valida que el argumento sea porlomenos 1
    if (argc <= 1) {
        printf("Numero argumentos incorrectos\n");
        printf("\n\t ./mod_beltranA DIM \n");
        return -1;
    }

    int N = (int) atof(argv[1]); // convierte el argumento a un entero
    if (N <= 0) {
        printf("\n Valores deben ser mayor que cero\n");
        return -1;
    }
//Se reserva memoria dinamica para todas las matrices
    mA = (double *) malloc(N * N * sizeof(double));
    mB = (double *) malloc(N * N * sizeof(double));
    mC = (double *) calloc(N * N, sizeof(double));
//Se inicializa las matrices A y B
    iniMatriz(N, mA, mB);
//Se imprimen las matrices iniciales si cumplen con la condicion dada
    imprMatrices(N, mA);
    imprMatrices(N, mB);

//Se multiplican las matrices AxB  para obtener la matric C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double sumaTemp = 0.0, *pA, *pB;
            pA = mA + i * N; //Se usa un apuntador para la fila A
            pB = mB + j;// Se usa un apuntador a la columna de B
            for (int k = 0; k < N; k++, pA++, pB += N) {
                sumaTemp += *pA * *pB; //Es el resultado acumulado de la multiplicacion
            }
            mC[j + i * N] = sumaTemp; //Se guarda el resultado en una nueva matriz C
        }
    }
 //Se imprime el resultado
    imprMatrices(N, mC);
//Se libera la memoria dinamica de los apuntadores
    printf("\n\tFin del programa.............!\n");
    free(mA);
    free(mB);
    free(mC);
    return 0;
}
