//Producto.h

/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Este objeto representa el objeto a ensamblar, verificar y 
 * emaquetar por la linea de producción. Contiene atributos 
 * para identificar el producto y booleanos para registrar 
 * las modificaciones de las maquinas. Sus metodos interactuan 
 * con la clase maquina para poder interactuar con los booleanos 
 * del producto. Esta clase tiene una relación de agregación con 
 * la clase maquina pues es creada por la fabrica y es agregada 
 * temporalmente a cada maquina para ser modificada. Clase fundamental 
 * en la simulación.
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H



#include <iostream> // Impresiones
#include <string> 

class Producto{

	//Declaración de atributos privados.

private:
	int id; // id del producto, diferenciar los demas. Fijo
	std::string type; // Tipo de producto.
	/* Por ahora el atributo Type no se usa en este programa. Sin embargo puede usarse
	*  para hacer herencia con la clase producto y expandir la Linea de Producción. Se
	*  mantiene para poder hacer del programa escalable. 
	*/

	int error; // Valor del porcentaje de error que tiene el producto.
	// Utilizado por las hijas de clase maquina. 

	std::string state; // Estado del producto: ¿En proceso o acabado ?
	/* Atributo no usado en este programa. Se puede usar para expandir 
	*  la interacción del usuario con el producto a la hora de iniciar
	*  la simulación. Se mantiene por la escalabilidad del programa.
	*/


	bool ensamblado; // Atributo booleano modificado por el ensamblador
	bool verificado; // Atributo booleano modificado por el verificador
	bool empaquetado; // Atributo booleano modificado por el empaquetador


	//Declaración de Metodos Publicos.
public: 

	Producto(int); //Constructor con argumento numerico para ID del producto.

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