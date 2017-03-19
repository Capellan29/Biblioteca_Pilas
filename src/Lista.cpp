/*
 * Lista.cpp
 *
 *  Created on: Feb 25, 2017
 *      Author: Victor
 */

#include "Lista.h"

Lista::Lista(): ultimoElemento(NULL)
{

}
void Lista::agregar(Elemento* elemento)
{
	if (ultimoElemento == NULL){
		ultimoElemento = elemento;
	} else {
		ultimoElemento -> setSiguiente(elemento);
		ultimoElemento = elemento;
	}
}


Elemento* Lista::extraer()
{
	if(ultimoElemento == NULL)
	{
		return NULL;
	}
	else
	{
		Elemento* respuesta = ultimoElemento;
		ultimoElemento = ultimoElemento  -> getSiguiente();
		return respuesta;
	}
}
