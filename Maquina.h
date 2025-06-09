//Maquina.h

#ifndef MAQUINA_H
#define MAQUINA_H


#include <iostream>
#include <string>
#include "Producto.h" // Necesario para el correcto funcionamiento de la agregación.

class Maquina{
protected:
	int id;
	int margen_error;
	Producto* producto; //Relación de agregación con un objeto Producto
	std::string type; // Tipo de maquina.
	int tiempo;

public:
	Maquina(int,std::string);
	int get_id();
	int get_tiempo();
	void set_type(std:: string);
	std::string get_type();
	void set_producto(Producto*);
	virtual void procesar() = 0; //Sobreescrito por cada hijo para incuir su proceso.

};

#endif