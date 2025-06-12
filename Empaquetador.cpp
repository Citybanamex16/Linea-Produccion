//Empaquetador.cpp

#include"Empaquetador.h"
#include <iostream>
#include <string>

// Se inicializa el constructor del padre mas el margen de error del tipo Empaquetador.
Empaquetador::Empaquetador(int _id,std::string _type):Maquina( _id,_type){
	margen_error = 65;

}

/* Sobreescritura del metodo de la clase maquina. Identifica si 
*  el producto ya fue empaquetado y en caso de que no obtiene 
*  el error del producto. Si el error entra en el margen el
*  empaquetador modifica el booleno. De lo contrario no lo 
*  modifica. 
*/

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