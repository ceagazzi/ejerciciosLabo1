/*
 ============================================================================
 Name        : estructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMCHAR 50
#define CANTIDAD 2


typedef struct
{
	char nombre [TAMCHAR];
	int edad;
	float altura;
	float peso;
}Persona;

int main(void) {

	Persona gente[CANTIDAD];
	int i;
	int edadMaxima;

	for(i = 0; i < CANTIDAD; i ++)
	{
		printf("Ingrese nombre:\n");
		scanf("%s", gente[i].nombre);
		printf("Ingrese edad:\n");
		scanf("%d", &gente[i].edad);
		printf("Ingrese altura:\n");
		scanf("%f", &gente[i].altura);
		printf("Ingrese peso:\n");
		scanf("%f", &gente[i].peso);
	}

	for(i = 0; i < CANTIDAD; i ++)
	{
		printf("Nombre: %s\n", gente[i].nombre);
		printf("Edad: %d\n", gente[i].edad);
		printf("Altura: %f\n", gente[i].altura);
		printf("Peso: %f\n", gente[i].peso);
	}





	return EXIT_SUCCESS;
}
