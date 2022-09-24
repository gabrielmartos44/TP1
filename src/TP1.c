/*
 ============================================================================
 Name        : TP1.c
 Author      : Gabriel Andres Martos Zambrano DNI: 95748328
 Version     :
 Copyright   : Your copyright notice
 Description : trabajo practico N1 utn
 ============================================================================
 */


#include "functionsGabo.h"
#include "funciones.h"
#define MIN 1
#define MAX 99
#define AUMENTO_EUROPEO 35
#define PRESUPUESTO 100000000000
#define MIN_CAMISAS 0
#define MAX_CAMISAS 99

int main(void)
{
	setbuf(stdout,NULL);

	int contDelanteros,contMedicampistas,contDefensores,contPorteros,contAFC,contCAF,contCONCACAF,contCONMEBOL,contUEFA,contOFC,acumuladorJugadores;
	int banderaUefa,banderaCalculos,banderaJugadores,banderaMantenimiento,banderaSalir;
	int opcion,opcionMantenimiento,posiciones,numeroCamisas,opConfederacion;
	float costoHospedaje,costoComida,costoTransporte,promedioAFC,promedioCAF,promedioCONCACAF,promedioCONMEBOL,promedioUEFA,promedioOFC;
	float costoDeMantenimiento,mantenimientoAumentado,aumentoRecibido;

	costoHospedaje =0;
	costoComida =0;
	costoTransporte =0;

	contDelanteros =0;
	contMedicampistas =0;
	contDefensores =0;
	contPorteros=0;
	contAFC =0;
	contCAF =0;
	contCONCACAF =0;
	contCONMEBOL =0;
	contUEFA =0;
	contOFC =0;

	banderaCalculos =0;
	banderaUefa =0;
	banderaJugadores=0;
	banderaMantenimiento=0;
	banderaSalir =0;

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
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal: \n","ERROR...",MIN_CAMISAS,MAX_CAMISAS);

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
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal :\n","ERROR...",MIN_CAMISAS,MAX_CAMISAS);

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
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal: \n","ERROR...",MIN_CAMISAS,MAX_CAMISAS);

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
									GetNumeroIntConRango(&numeroCamisas,"ingrese el numero del dorsal \n","ERROR...",MIN_CAMISAS,MAX_CAMISAS);

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

			if(contPorteros >=1 || contDefensores >=1 || contMedicampistas >=1 || contDelanteros >=1)
			{
				banderaJugadores = 1;
			}

			banderaSalir =0;

			system("pause");
			break;

		case 3:
			if(banderaJugadores==1 && banderaMantenimiento ==1)
			{
				acumuladorJugadores =sumarEnteros(contPorteros,contDefensores);
				acumuladorJugadores =sumarEnteros(acumuladorJugadores,contMedicampistas);
				acumuladorJugadores =sumarEnteros(acumuladorJugadores,contDelanteros);

				promedioAFC =calcularPromedio(contAFC,acumuladorJugadores);
				promedioCAF = calcularPromedio(contCAF,acumuladorJugadores);
				promedioCONCACAF = calcularPromedio(contCONCACAF,acumuladorJugadores);
				promedioCONMEBOL = calcularPromedio(contCONMEBOL,acumuladorJugadores);
				promedioUEFA = calcularPromedio(contUEFA,acumuladorJugadores);
				promedioOFC = calcularPromedio(contOFC,acumuladorJugadores);

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
