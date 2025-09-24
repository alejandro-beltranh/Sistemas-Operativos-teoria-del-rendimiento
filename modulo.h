#ifndef MODULO_H
#define MODULO_H

#include <sys/time.h>

//Definicion de las variables globales que se utilizaran
extern double *mA, *mB, *mC; 
extern struct timeval ini, fin;

//Firma de las funciones que se ejecutan en el archivo modulo.h 
void InicioMuestra();
void FinMuestra();
void iniMatriz(int n, double *m1, double *m2);
void imprMatrices(int n, double *matriz);

#endif
