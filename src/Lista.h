/*
 * Lista.h
 *
 *  Created on: Feb 25, 2017
 *      Author: Victor
 */

#ifndef LISTA_H_
#define LISTA_H_

#include "Elemento.h"
using namespace std;

class Lista
{

	private:
		Elemento* ultimoElemento;

	public:
		Lista();
		void agregar(Elemento* elemento);
		Elemento* extraer();
};

#endif
