/*
 ============================================================================
 Name        : validarNumeros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarQueSeaNumero(char* pArray);

int main(void) {

	int i;
	char texto[11];
	int saldoDelBanco=1;

	fgets(texto,11,stdin);
	// validar que sean todos los caracteres numericos (del 0 al 9)
	if(validarQueSeaNumero(texto)==1)
	{
		saldoDelBanco = atoi(texto);
	}

	printf("\ntenes %d pesos",saldoDelBanco);

	return EXIT_SUCCESS;
}

int validarQueSeaNumero(char* pArray)
{
	int retorno = -1;
	int i = 0;

	if(pArray != NULL)
	{
		while(pArray[i] != 0) // o '\0'
		{
			if(pArray[i] <= '9' && pArray[i] >= '0') //o los numeros sin comillas del ascii
			{
				retorno = 1;
			}
			i++;
		}
	}


	return retorno;
}
