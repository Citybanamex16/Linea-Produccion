//Empaquetador.h
#ifndef EMPAQUETADOR_H
#define EMPAQUETADOR_H

#include <iostream>
#include <string>
#include "Maquina.h" // Relación de Herencia
// Relación de Agregación
#include "Producto.h"

class Empaquetador: public Maquina{


public:
	Empaquetador(int,std::string);
	void procesar();
};

#endif