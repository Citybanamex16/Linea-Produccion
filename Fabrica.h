//Fabrica.h

#ifndef FABRICA_H
#define FABRICA_H

// Relación de Composición
#include "Producto.h"
// Composición con Herencias de Maquina
#include "Verificador.h"
#include "Ensamblador.h"
#include "Empaquetador.h"

#include <iostream>
#include <string>

/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Clase define el objeto fabrica. Dentro de este objeto se tienen los objetos 
 * Producto y las herencias de tipo maquina. Este objeto es el que agrega cada
 * producto a las maquinas por medio de Poliformismo. Inicia la simulación, 
 * genera los reportes y los manda la main. Indispenable en el programa. 
 */


class Fabrica {
private:
	Producto** listaProductos; // doble apuntador a un array en el HEAP.
	Maquina* lista_Maquinas[3]; // Lista de apuntadores de Tipo maquina. Contiene 
	// las 3 herencias de clase Maquina.
	// tamaño del array, usado en ciclos for que recorren la lista Productos
	int num_productos;

	// Array para errores[error en ensamblador, error en empaquetador, error en verificador]
	int num_errores[3];
	// Array para errores[exitos en ensamblador, exitos en empaquetador, exitos en verificador]
	int num_exitos[3];

	int iteracion_fabrica; // Registro de el numero de iteración de la simulación.
	std::string reportes[20]; // Array Tipo String que contiene los reportes de cada 
	//iteracion de simulación. 


public:
	// 2 constructores. 1 para generar solo las maquinas y otro ademas para generar la cantidad deseada de productos.
	Fabrica();
	Fabrica(int);

	// Inicia la agregación de los productos a las maquinas.
	std::string iniciar_simulador();

	// Imprime si fue exitoso o no el producto procesado
	void estado_del_producto(Producto*,std::string);

	//Genera el reporte de la simulación.
	std::string generar_reporte();

	std::string get_reporte(int);

	int get_iteraciones();

	// Crea la cantidad de instancias tipo Producto dado 
	// por el usuario. 
	void crear_producto(int);

};

#endif