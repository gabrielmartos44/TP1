/*
 * functionsGabo.h
 *
 *  Created on: 24 sep. 2022
 *      Author: Gabriel
 */

#ifndef FUNCTIONSGABO_H_
#define FUNCTIONSGABO_H_

#include <stdio.h>
#include <stdlib.h>

int GetNumeroIntConRango(int *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo);
int GetNumeroFloatConRango(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo);
float calcularPromedio(int dividendo,int divisor);
float aumentoPorcentual(float numero,int aumento);
float sumarflotantes(float numUno,float numDos);

#endif /* FUNCTIONSGABO_H_ */
