/*
 * productos.c
 *
 *  Created on: 15 abr. 2021
 *      Author: CEA
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "productos.h"


void prod_initArray(Producto* pArray, int size)
{
	int i;

	if(pArray != NULL && size > 0)
	{
		for(i = 0; i < TAM; i++)
		{
			pArray[i].nombre[0] = 0;
			pArray[i].descripcion[0] = 0;
			pArray[i].precio = 0.0;
			pArray[i]
			/*strncpy(productos[i].nombre, "-", 31); //mmmaaaaalllll
			strncpy(productos[i].descripcion, "-", 128); //mmmmmaallllll
			productos[i].precio = 0;*/
		}
	}
}

void prod_printArray(Producto* pArray, int size, int index)
{
	if(pArray != NULL && size > 0 && index < size)
	{
		printf("%s\t %s\t %f\n", pArray[index].nombre,
								 pArray[index].descripcion,
								 pArray[index].precio);

	}
}
