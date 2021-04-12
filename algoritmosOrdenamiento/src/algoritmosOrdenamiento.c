/*
 ============================================================================
 Name        : algoritmosOrdenamiento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcularMinimoArray(int* pArray, int size, int* resultado);
int ordenarArray(int *pArray, int size);

int main(void) {

	int array[5] = {3, 5, 1, 4, 8};
	int minimo, index, i;

	index = calcularMinimoArray(array,  5,  &minimo);

	printf("el minimo es %d\n", minimo);
	printf("el indice es %d\n", index);

	for(i = 0; i < 5; i++)
	{
		printf("%d\n", array[i]);
	}

	ordenarArray(array, 5);

	for(i = 0; i < 5; i++)
		{
			printf("%d\n", array[i]);
		}


	return EXIT_SUCCESS;
}

int calcularMinimoArray(int* pArray, int size, int* resultado)
{
	int retorno = -1;
	int i, index;
	int minimo;

	if(pArray != NULL && size > 0 && resultado != NULL)
	{
		minimo = pArray[0];
		for(i = 1; i < size; i++) //Arranco desde 1 porque ya use el 0 en linea anterior
		{
			if(pArray[i] < minimo)
			{
				minimo = pArray[i];
				index = i;
			}
		}
		retorno = index;
		*resultado = minimo;
	}
	return retorno;
}

/*FOR i=0 i<limite-1 i++
1- BUSCO EL MENOR DESDE INDICE i
IF i != indiceMinimo
2 - EN UN AUXILIAR GUARDO EL VALOR DEL INDICE [i]
3- COLOCO EL MENOR EN EL INDICE [i]
4- COLOCO AUX EN EL INDICE [indiceMinimo]*/

int ordenarArray(int *pArray, int size)
{
	int retorno = -1;
	int i, indiceMinimo, minimo, auxIndice;

	if(pArray != NULL && size > 0)
	{
		for(i = 0; i < size-1; i++)
		{
			indiceMinimo = calcularMinimoArray(pArray, size, &minimo);
			if(i != indiceMinimo)
			{
				auxIndice = pArray[i];
				pArray[i] = minimo;
				indiceMinimo = auxIndice;
			}
		}
	}
	return retorno;

}

int arrayBubbleSortInt(int* pArray, int size)
{
	int retorno = -1;
	int bufferInt;
	int i;
	int flagSwap;

	if(pArray != NULL && size > 0)
	{
		do

			while()
	}

	return retorno;
}
