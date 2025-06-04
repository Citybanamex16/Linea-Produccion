//Verificador.cpp
#include "Verificador.h"
#include <iostream>
#include <string>

Verificador::Verificador(int _id,std::string _type):Maquina(_id,_type){
	margen_error = 85;

}

void Verificador::procesar(){
	if (producto->get_verificado() == false){
		if(producto ->get_error() > margen_error){
			// error en el verificado
			producto->set_verificado(false); //error en el producto.
		}
		else{
			producto->set_verificado(true); //Verificamos el producto.
		}
	
	}
}