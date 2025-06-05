//Producto.cpp

#include "Producto.h"
#include <iostream>
#include <string>
// Librería que incluye la función rand()
#include <cstdlib>

using namespace std;

Producto::Producto(int _id){
	id = _id;

	error = rand() % 100;

	cout << "probabilidad de error del: " << error << endl;


	// Generamos el error de forma aleatoria. 
}

int Producto::get_id(){
	return id;
}

float Producto::get_error(){
	return error;
}

string Producto::get_type(){
	return type;
}

void Producto::set_type(string _type){
	type = _type;
}


string Producto::get_state(){
	return state;
}

void Producto::set_state(string _state){
	state = _state;
}

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




