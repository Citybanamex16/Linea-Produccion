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


class Fabrica {
private:
	int const static MAX_PRODUCTOS = 20;
	Producto* listaProductos[MAX_PRODUCTOS];
	Maquina* lista_Maquinas[3];
	// tamaño del array, usado en ciclos for que recorren la lista Productos
	int num_productos;


public:
	// 2 constructores. 1 para generar solo 1 producto y otro para generar la cantidad deseada de productos.
	Fabrica();
	Fabrica(int);

	void iniciar_simulador();
	void estado_del_producto(Producto*,std::string);

};

#endif