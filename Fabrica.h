//Fabrica.h

#ifndef FABRICA_H
#define FABRICA_H

// Composición
#include "Producto.h"
#include "Verificador.h"
#include "Ensamblador.h"
#include "Empaquetador.h"

#include <iostream>
#include <string>
#include <vector>


class Fabrica {
private:
	std::vecto<Producto> listaProductos;

	Ensamblador	 ensamblador;
	Verificador	 verificador;
	Empaquetador empaquetador;


public:
	// 2 constructores. 1 para generar solo 1 producto y otro para generar la cantidad deseada de productos.
	Fabrica();
	Fabrica(int);


	std::vector get_listaProductos();

	void añadir_listaProducto();

	std::vector get_listaMaquina();

	void añadir_listaMaquina();

}

#endif