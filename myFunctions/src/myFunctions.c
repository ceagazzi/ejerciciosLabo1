/*
 ============================================================================
 Name        : myFunctions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	char letra[2];
	int numero;
	float flotante;

	if(!utn_getChar("Ingrese letra\n", "Error de letra\n", &letra, 'a', 'z', 2)){
		printf("la letra es %c", letra);
	}
	/*if(!utn_getInt(&numero,"Ingrese un numero\n", "Error de numero\n", 0, 25, 2))
	{
		printf("El numero es %d", numero);
	}

	if(!utn_getFloat(&flotante,"Ingrese un numero\n", "Error de numero\n", -100.00, 2500.00, 2))
	{
		printf("El numero es %.2f", flotante);
	}*/


	return EXIT_SUCCESS;
}

//funcion en main pide cant. de edades, func de max, min, prom
