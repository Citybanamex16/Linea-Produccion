//Ensamblador.cpp

#include "Ensamblador.h"
#include <iostream>
#include <string>


Ensamblador::Ensamblador(int _id, std::string _type):Maquina(_id, _type){
	margen_error = 50.0;

}

void Ensamblador::procesar(){
	// Verificamos si el producto ya esta ensamblado
	if(producto->get_ensamblado() == false){
		if(producto-> get_error() > margen_error){
			//Error en ensamblado
			producto->set_ensamblado(false);
		}

		else {
			producto->set_ensamblado(true); // Ensamblamos y modificamos el producto
		}

	
}


}


