//============================================================================
// Name        : Biblioteca.cpp
// Author      : victor
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"

Lista* lista = new Lista();

void listar(){
    int contador = 1;
    cout << "LISTADO DE LIBROS ALMACENADOS" <<endl;
    Elemento* i = lista -> extraer();
    while (i != NULL){
        cout <<contador
            << ".- T. " << i -> getTitulo()
            << " A. " << i -> getAutor()
            << " CE. " << i -> getEditora()
            << " F. " << i -> getFechaPublicacion()
            << " C. " << i -> getCategoria() <<endl;
        i = lista -> extraer();
        contador++;
    }
    cout << "\n\n\nLEYENDA:\n"
        << "T. = TITULO\n"
        << "A. = AUTOR,\n"
        << "CE. =  CASA EDITORA, \n"
        << "F. = FECHA DE PUBLICACION,\n"
        << "C. = CATEGORIA.";
    system("pause");
}

void insertar(){
    cout << "AGREGAR UN NUEVO LIBRO: \n";
    string titulo, autor, editora, fechaPublicacion, categoria;
    cout << "TITULO: "; cin >> titulo;
    cout << "AUTOR: "; cin >> autor;
    cout << "EDITORA: "; cin >> editora;
    cout << "FECHA DE PUBLICACION (DD/MM/AA): "; cin >> fechaPublicacion;
    cout << "CATEGORIA: "; cin >> categoria;
    Elemento* elemento = new Elemento(titulo, autor, editora, fechaPublicacion, categoria);
    lista -> agregar(elemento);
}

void ultimolibro(){
    /*cout << "ULTIMO LIBRO AGREGADO: " <<endl
        << "TITULO: " << i -> getTitulo() << endl
        << "AUTOR: " << i -> getAutor() <<endl
        << "CASA EDITORA: " << i -> getEditora() <<endl
        << "FECHA DE PUBLICACION: " << i -> getFechaPublicacion() <<endl
        << "CATEGORIA: " << i -> getCategoria() <<endl;*/
}

void buscar(){
    int contador = 1;
    string _categoria, Categoria;
    cout << "ESPECIFIQUE LA CATEGORIA: ";
    cin >> _categoria;
    cout << "RESULTADO DE LA BUSQUEDA \n";
    Elemento* i = lista -> extraer();
    while (i != NULL){
    Categoria = i -> getCategoria();
        if (Categoria == _categoria) {
            cout <<contador
                << ".- T. " << i -> getTitulo()
                << " A. " << i -> getAutor()
                << " CE. " << i -> getEditora()
                << " F. " << i -> getFechaPublicacion()
                << " C. " << i -> getCategoria() <<endl;
            contador++;
        }
        i = i -> getSiguiente();
    }
    system("pause");
}

void menu(){
    int opcion = 0;
    while (opcion != 5){
        cout<<"SISTEMA DE BIBLIOTECA K-LIPSO\n";
        cout<<"1.- LISTAR LIBROS \n2.- INSERTAR LIBRO \n3.- SOLICITAR ULTIMO LIBRO DE LA PILA \n4.- BUSCAR LIBRO POR CATEGORIA \n5.- SALIR";
        cout<<"\nELIJA UNA OPCION: ";
        cin>> opcion;
        switch(opcion){
            case 1: listar();
                break;
            case 2: insertar();
                break;
            case 3: ultimolibro();
                break;
            case 4: buscar();
                break;
        }
    }
}

int main() {
	menu();
	return 0;
}
