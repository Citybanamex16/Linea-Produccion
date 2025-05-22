//Fabrica.cpp

#include "Fabrica.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Fabrica::Fabrica(){
	// Creamos los componentes de la fabrica
	ensamblador = Ensamblador a;
	verificador =  Verificador b;
	empaquetador = Empaquetador c;

	/* Utilizaremos una función de <vector> llamada emplace_back(). Esta función llama al constructor por
	 defecto de las clases del vector y crea directamente en el vectr un objeto. no necesitas objetos existentes
	 pues se hacen in-place con esta función. Si el constructor por defecto tiene parametros los puedes 
	 incluir en la función emplace_back(int parametro, std::string nombre).*/
	listaProductos.emplace_back(1);

}

Fabrica::Fabrica(int _cantidad){

	ensamblador = Ensamblador a;
	verificador =  Verificador b;
	empaquetador = Empaquetador c;

	for(int i = 0; i < _cantidad; i++ ){
		listaProductos.emplace_back(i);
	}

}

