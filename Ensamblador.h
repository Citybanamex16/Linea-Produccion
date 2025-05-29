//Ensamblador.h

#ifndef ENSAMBLADOR_H
#define ENSAMBLADOR_H

#include <iostream>
#include <string>
#include "Maquina.h"
// Relación de Agregación
#include "Producto.h"


class Ensamblador: public Maquina{
private:
	float tiempo_ensamblado;

public:
	Ensamblador(int,std::string);
	int get_tiempo_ensamblado();
	void procesar();


};



#endif