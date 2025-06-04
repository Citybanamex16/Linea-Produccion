//Producto.h

#ifndef PRODUCTO_H
#define PRODUCTO_H



#include <iostream>
#include <string>

class Producto{

private:
	int id; // id del producto, diferenciar los demas. Fijo
	std::string type; // Tipo de producto. Fijo

	int error;

	std::string state; // Estado del producto: ¿En proceso o acabado ?
	bool ensamblado; // Atributo booleano modificado por el ensamblador
	bool verificado; // Atributo booleano modificado por el verificador
	bool empaquetado; // Atributo booleano modificado por el empaquetador

public: 

	Producto(int);

	//Getters y Setters
	int get_id(); // Getter para el valor de id inicializado en el constructor.

	std::string get_type(); 
	void set_type(std::string);

	std::string get_state(); // Las maquinas necesitan saber si el productor esta acabado o en proceso
	void set_state(std::string);

	float get_error();

	//Atributos que interactuan con objetos Maquina. Cada uno de estos atributos es modificado por su maquina correspondiente.
	bool get_ensamblado();
	void set_ensamblado(bool);

	bool get_verificado();
	void set_verificado(bool);

	bool get_empaquetado();
	void set_empaquetado(bool);

};






#endif