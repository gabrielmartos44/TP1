/*
 * functionsGabo.c
 *
 *  Created on: 24 sep. 2022
 *      Author: Gabriel
 */
#include "functionsGabo.h"
//-
int GetNumeroIntConRango(int *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo){
	int retorno = -1;
		int IBuffer;

			if (pResultado!= NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo)
			{
				do
				{
					printf ("%s\n",mensaje);
					fflush (stdin);
					if (scanf ("%d",&IBuffer)==1 && (IBuffer >= minimo && IBuffer <= maximo))
					{
						*pResultado = IBuffer;
						retorno = 0;
						break;
					}
					else
					{
						printf ("%s",mensajeError);
					}
				} while (retorno == -1);
			}

			return retorno;
	}
//-
int GetNumeroFloatConRango(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo)
{
	int retorno = -1;
	float fBuffer;

		if (pResultado!= NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo)
		{
			do
			{
				printf ("%s\n",mensaje);
				fflush (stdin);
				if (scanf ("%f",&fBuffer)==1 &&(fBuffer >= minimo && fBuffer <= maximo))
				{
					*pResultado = fBuffer;
					retorno = 0;
					break;
				}
				else
				{
					printf ("%s",mensajeError);
				}
			} while (retorno == -1);
		}

		return retorno;
}
//-
float calcularPromedio(int dividendo,int divisor)
{
	float promedio;

	if(divisor !=0)
	{
      promedio = (float)dividendo /divisor;
	}
	else
	{
		promedio =0;
	}
      return promedio;
}
//-
float aumentoPorcentual(float numero,int aumento)
{
	float numAumentado;

	numAumentado = numero + numero *((float)aumento/100);

	return numAumentado;
}
//-
float sumarflotantes(float numUno,float numDos)
{
	float resultado;

	resultado = numUno + numDos;

	return resultado;
}
