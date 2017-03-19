/*
 * Elemento.h
 *
 *  Created on: Feb 26, 2017
 *      Author: Capellán
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_
#include <string>
using namespace std;

class Elemento
{
	private:
		string _titulo;
		string _autor;
		string _editora;
		string _fechaPublicacion;
		string _categoria;
		Elemento* _siguiente;
	public:
		Elemento(string titulo, string autor, string editora, string fehaPublicacion, string categoria);
		virtual ~Elemento();
		string getAutor()
		{
			return _autor;
		}
		string getCategoria()
		{
			return _categoria;
		}
		string getEditora()
		{
			return _editora;
		}
		string getFechaPublicacion()
		{
			return _fechaPublicacion;
		}
		Elemento* getSiguiente()
		{
			return _siguiente;
		}
		void setSiguiente(Elemento* siguiente)
		{
			_siguiente = siguiente;
		}

		string getTitulo()
		{
			return _titulo;
		}
};

#endif /* ELEMENTO_H_ */



