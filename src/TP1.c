/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "functionsGabo.h"
#define MIN 1
#define MAX 99
#define JUGADORES 22
#define AUMENTO_EUROPEO 35
#define PRESUPUESTO 100000000000

// para documentar dos barra y dos asteriscos



void mostrarMenuPrincipal(float costHospedaje,float costComida, float costTransporte,int contadorPorteros, int contadorDefensores,int contadorMedicampistas,int contadorDelanteros);
int contadorConfederaciones(int opc,int *pContAFC,int *pContCAF,int *pContCONCACAF,int *pContCONMEBOL,int *pContUEFA,int *pContOFC);
void mostrarSubMenus(int opc,float costHospedaje,float costComida, float costTransporte,int contadorPorteros, int contadorDefensores,int contadorMedicampistas,int contadorDelanteros);
void informeDeResultados(float promAFC,float promCAF,float promCONCACAF,float promCONMEBOL,float promUEFA,float promOFC,float costMantenimiento,float costoTotalAumentado,float aumentoHecho,int flagUefa);

int main(void) {
	setbuf(stdout,NULL);


	float costoHospedaje =0;
	float costoComida =0;
	float costoTransporte =0;
	int opcion,opcionMantenimiento,posiciones,numeroCamisas,opConfederacion;
	float costoDeMantenimiento;
	float mantenimientoAumentado;
	float aumentoRecibido;

	int minCamisas=0;
	int maxCamisas=99;
	int contDelanteros =0;
	int contMedicampistas =0;
	int contDefensores =0;
	int contPorteros=0;
	int contAFC =0;
	int contCAF =0;
	int contCONCACAF =0;
	int contCONMEBOL =0;
	int contUEFA =0;
	int contOFC =0;


	int minCamisas=0;
	int maxCamisas=99;
	int contDelanteros =0;
	int contMedicampistas =0;
	int contDefensores =0;
	int contPorteros=0;
	int contAFC =0;
	int contCAF =0;
	int contCONCACAF =0;
	int contCONMEBOL =0;
	int contUEFA =0;
	int contOFC =0;


	float promedioAFC;
	float promedioCAF;
	float promedioCONCACAF;
	float promedioCONMEBOL;
	float promedioUEFA;
	float promedioOFC;

	int banderaCalculos =0;
	int banderaUefa =0;
	int banderaJugadores=0;
	int banderaMantenimiento=0;

	int banderaSalir =0;

	do
	{
		mostrarMenuPrincipal(costoHospedaje,costoComida,costoTransporte,
								contPorteros,contDefensores,contMedicampistas,contDelanteros);
		GetNumeroIntConRango(&opcion,"Ingrese una opcion del menu: \n","Error...",0,5);

	switch(opcion)
	{
		case 1 :
			do
			{
				mostrarSubMenus(opcion,costoHospedaje,costoComida,costoTransporte,contPorteros,contDefensores,contMedicampistas,contDelanteros);

				GetNumeroIntConRango(&opcionMantenimiento,"Ingrese costo a cargar \n","Error...",0,4);

				switch(opcionMantenimiento)
				{
					case 1:
						GetNumeroFloatConRango(&costoHospedaje,"Ingrese el costo de hospedaje : \n","Error...Exediste el presupuesto de hospedaje...",0,PRESUPUESTO);
						break;
					case 2:
						GetNumeroFloatConRango(&costoComida,"Ingrese el costo de la comida  : \n","Error...Exediste el presupuesto de la comida...",0,PRESUPUESTO);
						break;
					case 3:
						GetNumeroFloatConRango(&costoTransporte,"Ingrese el costo de el transporte : \n","Error...Exediste el presupuesto del transporte...",0,PRESUPUESTO);
						break;
					case 4:
						banderaSalir =1;
						break;
					default:
						printf("Error... Opcion incorrecta \n\n ");
						break;
				}
		}while(banderaSalir !=1);

		if(costoHospedaje !=0 && costoComida !=0 && costoTransporte !=0)
		{
			banderaMantenimiento =1;
		}
		banderaSalir =0;
		system("pause");
		break;
//-------------------------------------------------------------------
		case 2:
			do{
				mostrarSubMenus(opcion,costoHospedaje,costoComida,costoTransporte,contPorteros,contDefensores,contMedicampistas,contDelanteros);

					GetNumeroIntConRango(&posiciones,"Ingrese la posicion del jugador que desea cargar \n","Error...",0,5);

					switch(posiciones)
					{
						case 1:
							if(contPorteros==2){
								printf("Ya se ingresaron todos los porteros requeridos para el mundial\n");
							}
							else{
								for(int i=0;i<2;i++)
								{
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal: \n","ERROR...",minCamisas,maxCamisas);

									printf("Confederaciones: \n 1- AFC \n 2- CAF \n 3- CONCACAF \n 4- CONMEBOL \n 5- UEFA \n 6- OFC\n\n");
									 GetNumeroIntConRango(&opConfederacion,"ingrese la confederacion del jugador :","Error...", 1, 6);

									 contadorConfederaciones(opConfederacion,&contAFC,&contCAF,&contCONCACAF,&contCONMEBOL,&contUEFA,&contOFC);

									contPorteros++;
									break;
								}

							}
							break;
						case 2:
						if(contDefensores==8)
						{
							printf("Ya se ingresaron todos los defensores requeridos para el mundial\n");
						}
							else{
								for(int i=0;i<8;i++)
								{
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal :\n","ERROR...",MIN,MAX);

									printf("Confederaciones: \n 1- AFC \n 2- CAF \n 3- CONCACAF \n 4- CONMEBOL \n 5- UEFA \n 6- OFC\n\n");
									GetNumeroIntConRango(&opConfederacion,"ingrese la confederacion del jugador :","Error...", 1, 6);

									contadorConfederaciones(opConfederacion,&contAFC,&contCAF,&contCONCACAF,&contCONMEBOL,&contUEFA,&contOFC);

									contDefensores++;
									break;
								}

							}
							break;
						case 3:
							if(contMedicampistas==8)
							{
								printf("Ya se ingresaron todos los mediocampistas requeridos para el mundial\n");
							}
							else
							{
								for(int i=0;i<8;i++)
								{
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal: \n","ERROR...",MIN,MAX);

									printf("Confederaciones: \n 1- AFC \n 2- CAF \n 3- CONCACAF \n 4- CONMEBOL \n 5- UEFA \n 6- OFC\n\n");
									GetNumeroIntConRango (&opConfederacion,"ingrese la confederacion del jugador :","Error...", 1, 6);

									contadorConfederaciones(opConfederacion,&contAFC,&contCAF,&contCONCACAF,&contCONMEBOL,&contUEFA,&contOFC);

									contMedicampistas++;
										break;
								}

							}
							break;
						case 4:
							if(contDelanteros==4)
							{
								printf("Ya se ingresaron todos los delanteros requeridos para el mundial\n");
							}
							else
							{
								for(int i=0;i<4;i++)
								{
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal \n","ERROR...",MIN,MAX);

									printf("Confederaciones: \n 1- AFC \n 2- CAF \n 3- CONCACAF \n 4- CONMEBOL \n 5- UEFA \n 6- OFC\n\n");
									GetNumeroIntConRango (&opConfederacion,"ingrese la confederacion del jugador :","Error...", 1, 6);

									contadorConfederaciones(opConfederacion,&contAFC,&contCAF,&contCONCACAF,&contCONMEBOL,&contUEFA,&contOFC);

									contDelanteros++;
									break;
								}

							}
							break;
						case 5:
							banderaSalir =1;
							break;
						default:
							printf("usted no ingreso una opcion correcta \n\n");
							break;
					}
				}while(banderaSalir !=1);

			if(contPorteros ==2 && contDefensores ==8 && contMedicampistas ==8 && contDelanteros ==4)
			{
				banderaJugadores = 1;
			}

			banderaSalir =0;

			system("pause");
			break;
//--------------------------------------------------------------------
		case 3:
			if(banderaJugadores==1 && banderaMantenimiento ==1)
			{
				promedioAFC =calcularPromedio(contAFC,JUGADORES);
				promedioCAF = calcularPromedio(contCAF,JUGADORES);
				promedioCONCACAF = calcularPromedio(contCONCACAF,JUGADORES);
				promedioCONMEBOL = calcularPromedio(contCONMEBOL,JUGADORES);
				promedioUEFA = calcularPromedio(contUEFA,JUGADORES);
				promedioOFC = calcularPromedio(contOFC,JUGADORES);

				costoDeMantenimiento = sumarflotantes(costoHospedaje,costoComida);
				costoDeMantenimiento = sumarflotantes(costoDeMantenimiento,costoTransporte);

				if(contUEFA>contAFC && contUEFA>contAFC && contUEFA>contAFC && contUEFA>contAFC && contUEFA>contAFC)
				{
					mantenimientoAumentado = aumentoPorcentual(costoDeMantenimiento,AUMENTO_EUROPEO);
					aumentoRecibido = mantenimientoAumentado -costoDeMantenimiento;
					banderaUefa=1;
				}

				banderaCalculos=1;

				printf("Los calculos se hicieron correctamente :D \n");
			}
			else
			{
				printf("\nPara hacer los calculos primero tienes que cargar los costos de mantenimiento y los jugadores\n");
			}
			system("pause");
			break;
		case 4:
			if(banderaCalculos==1 && banderaJugadores==1 && banderaMantenimiento ==1)
			{
				informeDeResultados(promedioAFC,promedioCAF,promedioCONCACAF,promedioCONMEBOL,promedioUEFA,promedioOFC,costoDeMantenimiento,mantenimientoAumentado,aumentoRecibido,banderaUefa);
			}
			else
			{
				printf("\n Para mostrar resultados tienes que cargar los costos de mantenimientos y hacer los calculos\n");
			}
			system("pause");
			break;
		case 5:
			printf("Gracias por usar mi programa :D\n");
			break;

		default:
			printf("opcion incorrecta \n\n");
			system("pause");
			break;

	}

	}while(opcion !=5);

	return EXIT_SUCCESS;
}
//---------------------------------------fin del main

//---------------------------------------------------------


//---------------------------------------------------------

//------------------------------------------------------------
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
//---------------------------------------------------------------------
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
//--------------------------------------------------------------
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
//------------------------------------------------------------


//-----------------------------------------------

//-----------------------------------------------------void informeDeResultados(float promAFC,float promCAF,float promCONCACAF,float promCONMEBOL,float promUEFA,float promOFC,float costMantenimiento,float costoTotalAumentado,float aumentoHecho);
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

