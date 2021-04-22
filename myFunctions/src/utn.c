/*
 * utn.c
 *
 *  Created on: Mar 30, 2021
 *      Author: CEA
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //Funciones de isAlpha, isDigit, etc

static int getString(char* pString, int size);
static int getInt(int* pResultado);
static int isNumber(char* pArray, int size);
static int getFloat(float* pResultado);
static int isFloat(char* pArray, int size);
static int getChar(char* pResultado);
static int isChar(char* pArray, int size);


static int getString(char* pString, int size)
{
	int retorno = -1;
	char bufferString[4096];
	if(pString != NULL && size > 0)
	{
		fpurge(stdin);
		if(fgets(bufferString, sizeof(bufferString), stdin) != NULL)
		{
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n')
			{
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= size)
			{
				strncpy(pString, bufferString, size); // NO PUEDO HACER ESTO!!! pString = bufferString;
				retorno = 0;
			}
		}
	}
	return retorno;
}

static int isNumber(char* pArray, int size)
{
	int retorno = 1; //es verdadera / -	En C “0” es FALSO y cualquier valor != 0 es VERDADERO.
	int i;
	if(pArray != NULL && size > 0)
	{
		for(i = 0; i < size && pArray[i] != 0; i++)
		{
			if(i==0 && (pArray[i] == '+' || pArray[i] == '-'))
			{
				continue;
			}
			if(pArray[i] < '0' || pArray[i] > '9')
			{
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}

static int getInt(int* pResultado)
{
	int retorno = -1;
	char bufferInt [256];
	if(pResultado != NULL)
	{
		if(	!getString(bufferInt,sizeof(bufferInt)) &&
			isNumber(bufferInt, sizeof(bufferInt)))
		{
			retorno = 0;
			*pResultado = atoi(bufferInt);
		}
	}
	return retorno;
}

static int isFloat(char* pArray, int size)
{
	int retorno = 1; //es verdadera / -	En C “0” es FALSO y cualquier valor != 0 es VERDADERO.
	int i;
	int contadorDePuntos = 0;
	if(pArray != NULL && size > 0)
	{
		for(i = 0; i < size && pArray[i] != 0; i++)
		{
			if(i==0 && (pArray[i] == '+' || pArray[i] == '-'))
			{
				continue;
			}
			if(pArray[i] < '0' || pArray[i] > '9')
			{
				if(pArray[i] == '.' && contadorDePuntos == 0)
				{
					contadorDePuntos++;
				}
				else
				{
				retorno = 0;
				break;
				}
			}
		}
	}
	return retorno;
}

static int getFloat(float* pResultado)
{
	int retorno = -1;
	char bufferFloat [256];
	if(pResultado != NULL)
	{
		if(	!getString(bufferFloat,sizeof(bufferFloat)) &&
			isFloat(bufferFloat, sizeof(bufferFloat)))
		{
			retorno = 0;
			*pResultado = atof(bufferFloat);
		}
	}
	return retorno;
}

static int getChar(char* pResultado)
{
	int retorno = -1;
	char bufferChar[2];
	if(pResultado != NULL)
	{
		if(	!getString(bufferChar,sizeof(bufferChar)) &&
			isChar(bufferChar, sizeof(bufferChar)))
		{
			retorno = 0;
			*pResultado = bufferChar;
		}
	}
	return retorno;
}

static int isChar(char* pArray, int size)
{
	int i=0;
	int retorno = 1;

	if(pArray != NULL && size > 0)
	{
		for(i=0 ; pArray[i] != '\0' && i < size; i++)
		{
			if((pArray[i] < 'A' || pArray[i] > 'Z' ) && (pArray[i] < 'a' || pArray[i] > 'z' ))
			{
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}






int utn_getInt(int *pResultado, char *pMensaje, char *pErrorMensaje, int minimo,
		int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt; //Un buffer antes de escribir en el resultado

	if (pResultado != NULL && pMensaje != NULL && pErrorMensaje != NULL
			&& minimo <= maximo && reintentos >0) {
		retorno = -2; //Codifico otro error

		do {
			printf("%s", pMensaje);
			fpurge(stdin); //fflush(stdin) WINDOWS / __fpurge(stdin) LINUX
			getInt(&bufferInt);
			//scanf("%d", bufferInt);
			if (bufferInt >= minimo && bufferInt <= maximo) {
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			printf("%s", pErrorMensaje);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

int utn_getFloat(float *pResultado, char *pMensaje, char *pErrorMensaje, float minimo,
		float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat; //Un buffer antes de escribir en el resultado

	if (pResultado != NULL && pMensaje != NULL && pErrorMensaje != NULL
			&& minimo <= maximo && reintentos >0) {
		retorno = -2; //Codifico otro error

		do {
			printf("%s", pMensaje);
			fpurge(stdin); //fflush(stdin) WINDOWS / __fpurge(stdin) LINUX
			getFloat(&bufferFloat);
			//scanf("%f", bufferFloat);
			if (bufferFloat >= minimo && bufferFloat <= maximo) {
				retorno = 0;
				*pResultado = bufferFloat;
				break;
			}
			printf("%s", pErrorMensaje);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

int utn_getChar(char *pResultado, char *pMensaje, char *pErrorMensaje, char minimo,
		char maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar[2]; //Un buffer antes de escribir en el resultado

	if (pResultado != NULL && pMensaje != NULL && pErrorMensaje != NULL
			&& minimo <= maximo && reintentos >= 0) {
		retorno = -2; //Codifico otro error

		do {
			printf("%s", pMensaje);
			fpurge(stdin); //fflush(stdin) WINDOWS / __fpurge(stdin) LINUX
			//scanf("%c", &bufferChar);
			getChar(&bufferChar);
			if (bufferChar >= minimo && bufferChar <= maximo) {
				retorno = 0;
				*pResultado = bufferChar;
				break;
			}
			printf("%s", pErrorMensaje);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

