/*
 ============================================================================
 Name        : primeraClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sumar (int* numeroUno, int* numeroDos, int* resultado);

int main(void) {

	/*int numbers [5];
	int acummulator = 0;
	int addition;
	int subtraction;
	int multiplication;
	int square;
	float division;
	float average;

	for(int i = 0; i < 5; i++){
		printf("Ingrese un numero:");
		scanf("%d", &numbers[i]);
		acummulator = acummulator + numbers[i];
	}

	average = (float)acummulator/5;
	addition = numbers[2] + numbers[3];
	subtraction = numbers[1] - numbers[4];
	multiplication = numbers[2];

	if(numbers[3] ==0){
		printf("No es posible calcular el cuadrado del 0\n");
	}
	else
		printf("El cuadrado de %d es %d\n", numbers[3], square = numbers[3] * numbers[3]);

	printf("El acumulado es %d\n", acummulator);
	printf("El promedio es %.2f\n", average);
	printf("La suma del numero %d y el numero %d es %d\n", numbers[2], numbers[3], addition);
	if(subtraction == 0){
		printf("La resta del numero %d y el numero %d es 0\n", numbers[1], numbers[2]);
	}
	else if(subtraction < 0){
		printf("La resta del numero %d y el numero %d es NEGATIVA y su resultado es %d\n", numbers[1], numbers[4], subtraction);
	}
	else
		printf("La resta del numero %d y el numero %d es POSITIVA y su resultado es %d\n", numbers[1], numbers[4], subtraction);

	sumar(&numbers[2], &numbers[4], &addition);
	printf("La nueva suma da %d", addition);*/


	int* x;
	int z;
	int y;

	x = &z;
	z = 65;
	y = *x;

	printf("%p\n", x);
	printf("%d\n", &x);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);






	return EXIT_SUCCESS;
}

void sumar(int* numeroUno, int* numeroDos, int* resultado){
		*resultado = *numeroUno + *numeroDos;
	}
