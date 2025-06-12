//Empaquetador.h
#ifndef EMPAQUETADOR_H
#define EMPAQUETADOR_H

/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Herencia de Clase Maquina. Esta clase Expande al tipo maquina
 * modificando el booleano empaquetado del producto con margen 
 * de error unico. 
 */

#include <iostream>
#include <string>
#include "Maquina.h" // Relación de Herencia
#include "Producto.h" // Relación de Agregación

class Empaquetador: public Maquina{

// Declaramos metodos publicos.
public:
	Empaquetador(int,std::string);

	// Sobreescritura del metodo del padre Maquina.
	void procesar();
};

#endif