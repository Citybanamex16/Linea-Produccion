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
	//int const static MAX_PRODUCTOS = 20;
	Producto** listaProductos; // doble apuntador a un array en el HEAP.
	Maquina* lista_Maquinas[3];
	// tamaño del array, usado en ciclos for que recorren la lista Productos
	int num_productos;

	// Array para errores[error en ensamblador, error en empaquetador, error en verificador]
	int num_errores[3];
	// Array para errores[exitos en ensamblador, exitos en empaquetador, exitos en verificador]
	int num_exitos[3];

	int iteracion_fabrica;
	std::string reportes[20];


public:
	// 2 constructores. 1 para generar solo 1 producto y otro para generar la cantidad deseada de productos.
	Fabrica();
	Fabrica(int);

	std::string iniciar_simulador();
	void estado_del_producto(Producto*,std::string);
	std::string generar_reporte();

	std::string get_reporte(int);

	int get_iteraciones();

	void crear_producto(int);

};

#endif