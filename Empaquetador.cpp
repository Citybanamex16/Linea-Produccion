//Empaquetador.cpp

#include"Empaquetador.h"
#include <iostream>
#include <string>

Empaquetador::Empaquetador(int _id,std::string _type):Maquina( _id,_type){
	margen_error = 65;

}

void Empaquetador::procesar(){
	if(producto->get_empaquetado() == false){
		if(producto->get_error() > margen_error){
			producto->set_empaquetado(false);
		}

		
		else{
			producto->set_empaquetado(true);

		}
	
}
}