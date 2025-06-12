//Verificador.h

/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Herencia de Clase Maquina. Esta clase Expande al tipo maquina
 * modificando el booleano verificado del producto con margen 
 * de error unico. 
 */


#ifndef VERIFICADOR_H
#define VERIFICADOR_H

#include <iostream>
#include <string>
#include "Maquina.h" // Relación de Herencia
// Relación de Agregación
#include "Producto.h"

class Verificador: public Maquina{

//Declaramos Metodos Publicos
public:
	Verificador(int,std::string);
	// Sobreescritura del metodo del padre Maquina.
	void procesar();
};

#endif