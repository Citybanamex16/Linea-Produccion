//Ensamblador.h

#ifndef ENSAMBLADOR_H
#define ENSAMBLADOR_H

/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Herencia de Clase Maquina. Esta clase Expande al tipo maquina
 * modificando el booleano ensamblado del producto con margen 
 * de error unico. 
 */

#include <iostream>
#include <string>
#include "Maquina.h" // Relación de Herencia
// Relación de Agregación
#include "Producto.h"


class Ensamblador: public Maquina{
	
//Declaramos metodos Publicos.
public:
	Ensamblador(int,std::string);
	// Sobreescritura del metodo del padre Maquina.
	void procesar();


};



#endif