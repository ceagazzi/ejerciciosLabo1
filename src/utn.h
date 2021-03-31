/*
 * utn.h
 *
 *  Created on: Mar 30, 2021
 *      Author: CEA
 */

#ifndef UTN_H_
#define UTN_H_

int utn_GetInt(char* pMensaje, char* pErrorMensaje, int* pResultado,
		int minimo, int maximo, int reintentos);
int utn_GetChar(char *pMensaje, char *pErrorMensaje, char *pResultado, char minimo,
		char maximo, int reintentos);




#endif /* UTN_H_ */
