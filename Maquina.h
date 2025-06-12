//Maquina.h

#ifndef MAQUINA_H
#define MAQUINA_H

/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Esta clase define el objeto abstracto de Maquina. Esta clase 
 * recibe por agregación un objeto de tipo producto y lo modifica
 * dependiendo del tipo de herencia de maquina que sea.
 */


#include <iostream>
#include <string>
#include "Producto.h" // Necesario para el correcto funcionamiento de la agregación.

class Maquina{
	// Definimos atributos protegidos heredados por las hijas de Maquina.
protected:
	int id;
	int margen_error; // Margen de error que la maquina tolera del objeto tipo Producto.
	Producto* producto; //Relación de agregación con un objeto Producto mediante Puntero.
	std::string type; // Tipo de maquina.
	int tiempo;		// Tiempo que la maquina retrasa el Cout.

// Definimos metodos publicos.
public:
	Maquina(int,std::string);
	int get_id();
	int get_tiempo();
	void set_type(std:: string);
	std::string get_type();
	// Metodo de agregación. Maquina recibe un Puntero de tipo Producto
	// Lo almacena en el atributo producto.
	void set_producto(Producto*);
	// Funció abstracta virtual a ser sobreescrita por las herencias. 
	// Al ser virtual el metodo que se llame será el de las herencias.
	virtual void procesar() = 0; //Sobreescrito por cada hijo para incuir su proceso.

};

#endif