#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

//Definen la variables globales
double *mA, *mB, *mC;
struct timeval ini, fin;

//Muestra el inicio del tiempo
void InicioMuestra() {
    gettimeofday(&ini, (void *)0);
}

//Muestra el fin del tiempo y calcula la diferencia con el inicio
void FinMuestra() {
    gettimeofday(&fin, (void *)0);
    fin.tv_usec -= ini.tv_usec;
    fin.tv_sec  -= ini.tv_sec;
    double tiempo = (double) (fin.tv_sec * 1000000 + fin.tv_usec);
    printf("%9.0f \n", tiempo);
}

//Inicializa dos matrices con valores definidos
void iniMatriz(int n, double *m1, double *m2) {
    for (int i = 0; i < n * n; i++) {
        m1[i] = i * 2.3 + 1.3;
        m2[i] = i * 2.3;
    }
}

//Imprime las matrices si su tamano es menor a 9, si es muy grande imprime un separador
void imprMatrices(int n, double *matriz) {
    if (n < 9) {
        printf("\n#######################################################\n");
        for (int i = 0; i < n * n; i++) {
            if (i % n == 0) printf("\n");
            printf(" %f ", matriz[i]);
        }
    } else {
        printf("\n#######################################################\n");
    }
}
