/*
 * productos.h
 *
 *  Created on: 15 abr. 2021
 *      Author: CEA
 */

#ifndef PRODUCTOS_H_
#define PRODUCTOS_H_

typedef struct
{
	char nombre[32];
	char descripcion[128];
	float precio;
	int isEmpty; // verdadero = 0 // lleno??? 1 es VACIO!!!
}Producto;

void prod_initArray(Producto* pArray, int size);
//falta la de prod_cargarProducto
void prod_printArray(Producto* pArray, int size, int index);


#endif /* PRODUCTOS_H_ */
