//Maquina.h

#ifndef MAQUINA_H
#define MAQUINA_H


#include <iostream>
#include <string>
#include "Producto.h" // Necesario para el correcto funcionamiento de la agregación.

class Maquina{
protected:
	int id;
	Producto* producto; //Relación de agregación con un objeto Producto
	std::string type; // Tipo de maquina.

public:
	Maquina(int);
	int get_id();
	void set_type(std:: string);
	std::string get_type();
	void set_producto(Producto&);
	void procesar(); //Sobreescrito por cada hijo para incuir su proceso.

};

#endif