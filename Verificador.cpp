//Verificador.cpp
#include "Verificador.h"
#include <iostream>
#include <string>

// Se inicializa el constructor del padre mas el margen de error del tipo Verificador.
Verificador::Verificador(int _id,std::string _type):Maquina(_id,_type){
	margen_error = 85;

}

/* Sobreescritura del metodo de la clase maquina. Identifica si 
*  el producto ya fue verificado y en caso de que no obtiene 
*  el error del producto. Si el error entra en el margen del
*  Verificador modifica el booleno. De lo contrario no lo 
*  modifica. 
*/

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