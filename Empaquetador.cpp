//Empaquetador.cpp

#include"Empaquetador.h"
#include <iostream>
#include <string>

Empaquetador::Empaquetador(int _id,std::string _type):Maquina( _id,_type){

}

void Empaquetador::procesar(){
	if(producto->get_empaquetado() == false){
	producto->set_empaquetado(true);}
}