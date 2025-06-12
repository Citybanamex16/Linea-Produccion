//Ensamblador.cpp

#include "Ensamblador.h"
#include <iostream>
#include <string>

// Se inicializa el constructor del padre mas el margen de error del tipo Ensamblador.
Ensamblador::Ensamblador(int _id, std::string _type):Maquina(_id, _type){
	margen_error = 50.0;

}

/* Sobreescritura del metodo de la clase maquina. Identifica si 
*  el producto ya fue ensamblado y en caso de que no obtiene 
*  el error del producto. Si el error entra en el margen el
*  ensamblador modifica el booleno. De lo contrario no lo 
*  modifica. 
*/

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


