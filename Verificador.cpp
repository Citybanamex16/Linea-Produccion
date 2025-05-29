//Verificador.cpp
#include "Verificador.h"
#include <iostream>
#include <string>

Verificador::Verificador(int _id,std::string _type):Maquina(_id,_type){

}

void Verificador::procesar(){
	if (producto->get_verificado() == false){
	producto->set_verificado(true); //Verificamos el producto.
	}
}