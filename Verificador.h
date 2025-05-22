//Verificador.h

#ifndef VERIFICADOR_H
#define VERIFICADOR_H

#include <iostream>
#include <string>
#include "Maquina.h"
// Relación de Agregación
#include "Producto.h"

class Verificador: public Maquina{
private:
	

public:
	Verificador();
	void procesar();
};

#endif