/*
 * utn.h
 *
 *  Created on: Mar 30, 2021
 *      Author: CEA
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getInt(int *pResultado, char *pMensaje, char *pErrorMensaje, int minimo,
		int maximo, int reintentos);
int utn_getFloat(float *pResultado, char *pMensaje, char *pErrorMensaje, float minimo,
		float maximo, int reintentos);
int utn_getChar(char *pResultado, char *pMensaje, char *pErrorMensaje, char minimo,
		char maximo, int reintentos);



#endif /* UTN_H_ */
