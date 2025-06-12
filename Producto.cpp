//Producto.cpp

#include "Producto.h"
#include <iostream>
#include <string>
// Librería que incluye la función rand()
#include <cstdlib> // Librería para hacer numero al azar

using namespace std;


//Genera instancias de clase producto asignando numero al ID.


Producto::Producto(int _id){
	id = _id;

	error = rand() % 100;

	//cout << "probabilidad de error del: " << error << endl;
	// Generamos el error de forma aleatoria. 
}

// Regresa el atributo ID
int Producto::get_id(){
	return id;
}

// Regresa el atributo error
float Producto::get_error(){
	return error;
}

// Regresa el atributo type
string Producto::get_type(){
	return type;
}

// establece el tipo de producto.
void Producto::set_type(string _type){
	type = _type;
}

// regresa el estado del producto.
string Producto::get_state(){
	return state;
}

// establece el estado del producto.
void Producto::set_state(string _state){
	state = _state;
}

/* Getters y setters de Booleanos. 
*  Estos modificadores de acceso son usados por la 
*  clase maquina. A atraves de estos las herencias 
*  de maquina modifican los atributos de los 
*  productos.
*/


bool Producto::get_ensamblado(){
	return ensamblado;
}

void Producto::set_ensamblado(bool _ensamblado){
	ensamblado = _ensamblado;
}

bool Producto::get_verificado(){
	return verificado;
}

void Producto::set_verificado(bool _verificado){
	verificado = _verificado;
}

bool Producto::get_empaquetado(){
	return empaquetado;
}

void Producto::set_empaquetado(bool _empaquetado){
	empaquetado = _empaquetado;
}




