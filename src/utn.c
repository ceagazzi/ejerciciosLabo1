/*
 * utn.c
 *
 *  Created on: Mar 30, 2021
 *      Author: CEA
 */

#include <stdio.h>
#include <stdlib.h>

int utn_GetInt(char *pMensaje, char *pErrorMensaje, int *pResultado, int minimo,
		int maximo, int reintentos) {
	int retorno = -1;
	int bufferInt; //Un buffer antes de escribir en el resultado

	if (pResultado != NULL && pMensaje != NULL && pErrorMensaje != NULL
			&& minimo <= maximo && reintentos >0) {
		retorno = -2; //Codifico otro error

		do {
			printf("%s", pMensaje);
			fpurge(stdin); //fflush(stdin) WINDOWS / __fpurge(stdin) LINUX
			scanf("%d", bufferInt);
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

int utn_GetChar(char *pMensaje, char *pErrorMensaje, char *pResultado, char minimo,
		char maximo, int reintentos) {
	int retorno = -1;
	int bufferChar; //Un buffer antes de escribir en el resultado

	if (pResultado != NULL && pMensaje != NULL && pErrorMensaje != NULL
			&& minimo <= maximo && reintentos >= 0) {
		retorno = -2; //Codifico otro error

		do {
			printf("%s", pMensaje);
			fpurge(stdin); //fflush(stdin) WINDOWS / __fpurge(stdin) LINUX
			scanf("%d", bufferChar);
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
