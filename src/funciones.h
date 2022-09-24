/*
 * funciones.h
 *
 *  Created on: 24 sep. 2022
 *      Author: Gabriel
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * @fn void mostrarMenuPrincipal(float, float, float, int, int, int, int)
 * @brief funcion que se encarga solo de mostrar el menu principal el cual se le pasan las variables para que pueda ser mas didactico
 * a ojos del usuario sobre que datos ha ingresado hasta el monmento
 *
 * @param costHospedaje  valor que se ingreso en el costo de hospedaje
 * @param costComida  valor que se ingreso en el costo de hospedaje
 * @param costTransporte valor que se ingreso en el costo de transporte
 * @param contadorPorteros contador de los porteros ingresados hasta el momento
 * @param contadorDefensores contador de los defensores ingresados hasta el momento
 * @param contadorMedicampistas contador de los mediocampistas ingresados hasta el momento
 * @param contadorDelanteros contador de los delanteros ingresados hasta el momento
 */
void mostrarMenuPrincipal(float costHospedaje,float costComida, float costTransporte,int contadorPorteros, int contadorDefensores,int contadorMedicampistas,int contadorDelanteros);

/**
 * @fn int contadorConfederaciones(int, int*, int*, int*, int*, int*, int*)
 * @brief funcion que se encarga con un switch dependiendo que opcion que ingreso el usuario
 * sumarle a las variables contadores +1 a la variable seleccionada (en este caso la posicion del jugador)
 *  siempre evaluando que el puntero a contador no sea NULL
 *
 *
 * @param opc la opcion ingresada por el usuario
 * @param pContAFC puntero a contador de la confederacion ACF
 * @param pContCAF puntero a contador de la confederacion  CAF
 * @param pContCONCACAF puntero a contador de la confederacion CONCACAF
 * @param pContCONMEBOL puntero a contador de la confederacion CONMEBOL
 * @param pContUEFA puntero a contador de la confederacion UEFA
 * @param pContOFC puntero a contador de la confederacion OFC
 * @return retorna 1 si no se pudo hacer el conteo y 0 si se pudo hacer el conteo
 */
int contadorConfederaciones(int opc,int *pContAFC,int *pContCAF,int *pContCONCACAF,int *pContCONMEBOL,int *pContUEFA,int *pContOFC);

/**
 * @fn void mostrarSubMenus(int, float, float, float, int, int, int, int)
 * @brief funcion que dependiendo la opcion que selecciono el usuario mostamo alguno de los dos tios de sub menus
 *
 * @param opc opcion elegida por el usuario
 * @param costHospedaje costo de hospedaje que ingreso hasta el momento
 * @param costComida costo de comida que  ingreso hasta el momento
 * @param costTransporte costo de transporte que ingreso hasta el momento
 * @param contadorPorteros contador de transporte que ingreso hasta el momento
 * @param contadorDefensores contador de defensores que ingreso hasta el momento
 * @param contadorMedicampistas contador de mediocampistas que ingreso hasta el momento
 * @param contadorDelanteros contador de delanteros que ingreso hasta el momento
 */
void mostrarSubMenus(int opc,float costHospedaje,float costComida, float costTransporte,int contadorPorteros, int contadorDefensores,int contadorMedicampistas,int contadorDelanteros);

/**
 * @fn void informeDeResultados(float, float, float, float, float, float, float, float, float, int)
 * @brief funcion que se encarga de informar los resultados ingresados y ya validados anteriormente
 *
 * @param promAFC promedio de la confederacion ACF
 * @param promCAF promedio de la confederacion CAF
 * @param promCONCACAF promedio de la confederacion CONCACAF
 * @param promCONMEBOL promedio de la confederacion CONMEBOL
 * @param promUEFA promedio de la confederacion UEFA
 * @param promOFC promedio de la confederacion OCF
 * @param costMantenimiento cotos sumados de lo ingresado en el menu de mantenimientos
 * @param costoTotalAumentado costo total con el aumento del 35%
 * @param aumentoHecho aumento que se hizo si la la confederacion de la uefa son mayoria
 * @param flagUefa bandera que indica que se van a mostrar los resultados si se cumple la condicion que los jugadores de la uefa son mayoria
 */
void informeDeResultados(float promAFC,float promCAF,float promCONCACAF,float promCONMEBOL,float promUEFA,float promOFC,float costMantenimiento,float costoTotalAumentado,float aumentoHecho,int flagUefa);


#endif /* FUNCIONES_H_ */
