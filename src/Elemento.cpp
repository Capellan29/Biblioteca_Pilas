/*
 * Elemento.cpp
 *
 *  Created on: Feb 26, 2017
 *      Author: Capellán
 */

#include "Elemento.h"

Elemento::Elemento(string titulo, string autor, string editora,
		string fehaPublicacion, string categoria) :_titulo(titulo), _autor(autor), _editora(editora), _fechaPublicacion(fehaPublicacion), _categoria(categoria), _siguiente(NULL) {
}

Elemento::~Elemento()
{

}

