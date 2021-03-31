/*
 ============================================================================
 Name        : arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "buscarArray.h"
#define CANTIDAD 5

int main(void) {

	int numeros[CANTIDAD];
	int maximo;

	for(int i = 0; i < CANTIDAD); i++)
		{
		utn_GetInt("Ingrese un numero", "Error de ingreso", numeros[i], 0, 99, 3);
		}

		arr_calcularMaximoInt(numeros, CANTIDAD, &maximo);

		printf("El maximo es %d", maximo);






	return EXIT_SUCCESS;
}
