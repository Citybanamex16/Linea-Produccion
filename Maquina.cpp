//Maquina.cpp

#include "Maquina.h"
#include <iostream>
#include <string>


Maquina::Maquina(int _id, std::string _type){
	id = _id;
	type = _type;
}

int Maquina::get_id(){
	return id;
}

std::string Maquina::get_type(){
	return type;
}
// Tipo de maquina
void Maquina::set_type(std::string _type){
	type = _type;
}

// Recibe un nuevo producto y lo registra en el atributo 'producto' listo para procesar
void Maquina::set_producto(Producto* _producto){
	producto = _producto;
}

void Maquina::procesar(){
	//Cada hija de maquina sobreescribe esta función con su proceso propio.
}

