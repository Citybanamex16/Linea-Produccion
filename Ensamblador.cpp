//Ensamblador.cpp

#include "Ensamblador.h"
#include <iostream>
#include <string>

Ensamblador::Ensambladora():Maquina(int _id){
	tiempo_ensamblado = 0.5;

}

int Ensamblador::get_tiempo_ensamblado(){
	return tiempo_ensamblado;
}

void Ensamblador::procesar(){
	// Verificamos si el producto ya esta ensamblado
	if(producto.get_ensamblado() = false){
	producto.set_ensamblado(true); // Ensamblamos y modificamos el producto
}


}


