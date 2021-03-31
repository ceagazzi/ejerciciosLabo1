/*
 * buscarArray.c
 *
 *  Created on: Mar 30, 2021
 *      Author: CEA
 */

#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoInt(int* pArray,int limite, int* pResultado)
{
	int retorno = -1;
	int bufferMaximo = 0;

	if(pArray != NULL && limite > 0 && pResultado !=NULL)
	{
		for(int i = 0; i < limite; i++)
		{
			if(pArray[i] > pArray[i+1])
			{
				bufferMaximo = pArray[i];
				break;
			}
		}
		retorno = 0;
		*pResultado = bufferMaximo;
	}
	return retorno;
}
int arr_calcularMinimoInt(int* pArray,int limite, int* pResultado)
{
	int retorno = -1;
	int bufferMinimo;

	if(pArray != NULL && limite > 0 && pResultado !=NULL)
	{

	}
	return retorno;
}
int arr_calcularPromedioInt(int* pArray,int limite, float* pResultado)
{
	int retorno = -1;
	int bufferMaximo;

	if(pArray != NULL && limite > 0 && pResultado !=NULL)
	{

	}
	return retorno;
}
int arr_calcularSumaInt(int* pArray,int limite, float* pResultado)
{
	int retorno = -1;
	int bufferMaximo;

	if(pArray != NULL && limite > 0 && pResultado !=NULL)
	{

	}
	return retorno;
}
