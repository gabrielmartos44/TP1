/*
 * funciones.c
 *
 *  Created on: 24 sep. 2022
 *      Author: Gabriel
 */
#include "functionsGabo.h"
#include "funciones.h"

void mostrarMenuPrincipal(float costHospedaje,float costComida, float costTransporte,
							int contadorPorteros, int contadorDefensores,int contadorMedicampistas,int contadorDelanteros)
{
		printf("\t\tMenu  Principal \n\n");
		printf("1. Ingreso de los costos de Mantenimiento \n");
		printf(" Costo de Hospedaje -> $%.2f \n",costHospedaje);
		printf(" Costo de Comida -> $%.2f \n",costComida);
		printf(" Costo de Transporte -> $%.2f \n",costTransporte);
		printf("2.Carga de jugadores \n");
		printf(" Arqueros -> $%d \n",contadorPorteros);
		printf(" Defensores -> $%d \n",contadorDefensores);
		printf(" Mediocampistas -> $%d \n",contadorMedicampistas);
		printf(" Delanteros -> $%d \n",contadorDelanteros);
		printf("3.Realizar todos los calculos \n");
		printf("4.Informar todos los resultados \n");
		printf("5.Salir \n");
}

int contadorConfederaciones(int opc,int *pContAFC,int *pContCAF,int *pContCONCACAF,int *pContCONMEBOL,int *pContUEFA,int *pContOFC)
{
	int retorno;
	retorno =1;

	if(pContAFC != NULL && pContCAF != NULL && pContCONCACAF != NULL && pContCONMEBOL != NULL && pContUEFA != NULL && pContOFC != NULL)
	{
		switch(opc)
		{
			case 1:
				*pContAFC = *pContAFC + 1;
				retorno=0;
				break;
			case 2:
				*pContCAF = *pContCAF + 1;
				retorno=0;
				break;
			case 3:
				*pContCONCACAF = *pContCONCACAF + 1;
				retorno=0;
				break;
			case 4:
				*pContCONMEBOL = *pContCONMEBOL + 1;
				retorno=0;
				break;
			case 5:
				*pContUEFA = *pContUEFA + 1;
				retorno=0;
				break;
			case 6:
				*pContOFC = *pContOFC + 1;
				retorno=0;
			break;
		}

		}
	return retorno;
}

void mostrarSubMenus(int opc,float costHospedaje,float costComida, float costTransporte,
					int contadorPorteros, int contadorDefensores,int contadorMedicampistas,int contadorDelanteros)
{
	if(opc==1)
	{
		printf("-----------SUB MENU MANTENIMIENTO--------\n\n");
		printf("1.- ingrear los costos de hospedaje \n");
		printf(" Costo de Hospedaje -> $%.2f \n",costHospedaje);
		printf("2.- ingresar los costos de la comida \n");
		printf(" Costo de Comida -> $%.2f \n",costComida);
		printf("3.- ingresar los costos de mantenimiento \n");
		printf(" Costo de Transporte -> $%.2f \n",costTransporte);
		printf("4.- salir del menu de mantenimiento del equipo \n\n");
	}
	else
	{
		printf("-----------CARGA DE JUGADORES--------\n\n");
		printf("1.- ingrear Porteros \n");
		printf(" Arqueros -> $%d \n",contadorPorteros);
		printf("2.- ingresar Defensores \n");
		printf(" Defensores -> $%d \n",contadorDefensores);
		printf("3.- ingresar Mediocampistas \n");
		printf(" Mediocampistas -> $%d \n",contadorMedicampistas);
		printf("4.- ingresar Delanteros \n");
		printf(" Delanteros -> $%d \n",contadorDelanteros);
		printf("5.- salir del menu de jugadores \n\n");
	}
}


void informeDeResultados(float promAFC,float promCAF,float promCONCACAF,float promCONMEBOL,float promUEFA,float promOFC,float costMantenimiento,float costoTotalAumentado,float aumentoHecho,int flagUefa)
{
	printf("\tInformar todos los Resultados\n\n");
	printf("Porcentaje Uefa %.2f\n",promUEFA);
	printf("Porcentaje Conmebol %.2f\n",promCONMEBOL);
	printf("Porcentaje Concacaf %.2f\n",promCONCACAF);
	printf("Porcentaje Afc %.2f\n",promAFC);
	printf("Porcentaje Ofc %.2f\n",promOFC);
	printf("Porcentaje Caf %.2f\n",promCAF);
	if(flagUefa==1)
	{
		printf("El costo de mantenimiento era de $%.2f y recibio un aumento de $%.2f, su nuevo valor es de: $%.2f\n",costMantenimiento,aumentoHecho,costoTotalAumentado);
	}
	else
	{
		printf("El costo de mantenimiento es de: $%.2f\n",costMantenimiento);
	}
}
