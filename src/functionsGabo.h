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

/**
 * @fn int GetNumeroIntConRango(int*, char*, char*, float, float)
 * @brief funcion hecha a base de el texto del classroom "apunte_imputs", esta funcion solicita un numero entero al usuario y valida que este
 * dentro del rango a evaluar y lo retorna con un puntero
 *
 * @param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @param mensaje puntero a cadena de caracteres que tiene el mensaje para pdedir el numero
 * @param mensajeError puntero a cadena de caracteres que inidca elmensaje de error
 * @param minimo valor minimo que se podra ingresar
 * @param maximo valor maximo que se podra ingresar
 * @return retorna 0 si obtuvo el numero entero y -1 si hubo algun error
 */
int GetNumeroIntConRango(int *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo);

/**
 * @fn int GetNumeroFloatConRango(float*, char*, char*, float, float)
 * @brief funcion hecha a base de el texto del classroom "apunte_imputs", esta funcion solicita un numero flotante(decimal) al usuario y valida que este
 * dentro del rango a evaluar y lo retorna con un puntero
 *
 * @param pResultado  Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @param mensaje puntero a cadena de caracteres que tiene el mensaje para pdedir el numero
 * @param mensajeError puntero a cadena de caracteres que inidca elmensaje de error
 * @param minimo valor minimo que se podra ingresar
 * @param maximo maximo valor maximo que se podra ingresar
 * @return retorna 0 si obtuvo el numero entero y -1 si hubo algun error
 */
int GetNumeroFloatConRango(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo);

/**
 * @fn float calcularPromedio(int, int)
 * @brief funcion que calcula el promedio entre dos numeros validando que el numero ingresado en en divisor no sea 0
 *
 * @param dividendo numero que se va a dividir
 * @param divisor numero que divide
 * @return retorna el promedio de los numeros ingresados
 */
float calcularPromedio(int dividendo,int divisor);

/**
 * @fn float aumentoPorcentual(float, int)
 * @brief funcion que se encarga de aplicar el aumento porcentual a un numero flotante el cual se le pasa
 * el porcentaje que se quiere aumentar
 *
 * @param numero valor al que se le quiere hacer el aumento
 * @param aumento porcentaje al que se le quiere aumentar al valor
 * @return retorna el valor del numero ingresado ya aumentado porcentualmente
 */
float aumentoPorcentual(float numero,int aumento);

/**
 * @fn float sumarflotantes(float, float)
 * @brief funcion que se encarga de hacer la suma de dos numeros flotantes(decimales)
 *
 * @param numUno primer numero a sumar
 * @param numDos segundo numero a sumar
 * @return retorno de la suma ya hecha por las dos variables
 */
float sumarflotantes(float numUno,float numDos);

/**
 * @fn int sumarEnteros(int, int)
 * @brief funcion que se encarga de hacer la suma de dos numeros flotantes(enteros)
 *
 * @param numUnonumUno primer numero a sumar
 * @param numdos numDos segundo numero a sumar
 * @return retorno de la suma ya hecha por las dos variables
 */
int sumarEnteros(int numUno,int numdos);

#endif /* FUNCTIONSGABO_H_ */
