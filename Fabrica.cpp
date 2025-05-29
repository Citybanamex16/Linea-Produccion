  //Fabrica.cpp

#include "Fabrica.h"
#include <iostream>
#include <string>
#include <array>


using namespace std;

Fabrica::Fabrica(){
	// Inicializamos los arrays de cada tipo.

	// Creamos los componentes de la fabrica
	
	// Creamos Instancias de las hijas de maquina en el HEAP y mantenemos apuntadores suyas en el STACK.
	Maquina* ensamblador = new Ensamblador(1,"Ensamblador");
	lista_Maquinas[0] = ensamblador;
	Maquina* verificador =  new Verificador(1,"Verificador");
	lista_Maquinas[1] = verificador;
	Maquina* empaquetador = new Empaquetador(1,"Empaquetador");
	lista_Maquinas[2] = empaquetador;

	// Creamos el producto en el Heap para que prevalezca una ves haya acabado la función.
	Producto* producto = new Producto(1);
	listaProductos[0] = producto;

	
	num_productos = 1;


}


Fabrica::Fabrica(int _cantidad){

	//Base del Polimorfismo. Se guarda apuntadores de tipo padre en una lista. 
	Maquina* ensamblador = new Ensamblador(1,"Ensamblador");
	lista_Maquinas[0] = ensamblador;
	Maquina* verificador =  new Verificador(1,"Verificador");
	lista_Maquinas[1] = verificador;
	Maquina* empaquetador = new Empaquetador(1,"Empaquetador");
	lista_Maquinas[2] = empaquetador;

	//Creamos instancias de productos segun la cantidad en el parametro.
	for(int i = 0; i < _cantidad; i++ ){
		Producto* producto = new Producto(i+1);
		listaProductos[i] = producto;
	}
	num_productos = _cantidad;

}


void Fabrica::iniciar_simulador(){
	string tipo_maquina;
	cout << "numero de productos a generar: " << num_productos<< endl;

	for (int i = 0; i < num_productos;++i){
		//cada producto debe de entrar a las 3 maquinas. indice i para lista de Productos
		
		cout << endl;
		for(int j = 0; j<3; ++j){
			lista_Maquinas[j]->set_producto(listaProductos[i]);
			lista_Maquinas[j]->procesar();
			tipo_maquina = lista_Maquinas[j]->get_type();

			//cout << "cout desde iniciar simulador "<<listaProductos[i]->get_id()<< endl;
			estado_del_producto(listaProductos[i],tipo_maquina);
		}
	cout<< "Producto numero: " << listaProductos[i]->get_id() << " Terminado. "<< endl;
	cout << endl;
	}
}


void Fabrica::estado_del_producto(Producto* producto,string tipo_maquina){
	/* Esta función recibe el puntero del producto y el tipo de maquina del que viene. Inspecciona si el producto fue correctamente modificado
	por la maquina. Imprime si el proceso se completo con exito o si hubo un error.*/
	if(tipo_maquina == "Ensamblador"){
		if(producto->get_ensamblado() == true){
			cout << "Producto numero: " << producto->get_id() << " ensamblado correctamente" << endl;
		}
		else{
			cout << "Producto numero: " << producto->get_id() << " error en ensamblaje" << endl;
		}
	}

	else if(tipo_maquina == "Verificador"){
		if(producto->get_verificado() == true){
			cout << "Producto numero: " << producto->get_id() << " verificado correctamente" << endl;
		}
		else{
			cout << "Producto numero: " << producto->get_id() << " error en verificación" << endl;
		}
	}

	else if(tipo_maquina == "Empaquetador"){
		if(producto->get_empaquetado() == true){
			cout << "Producto numero: " << producto->get_id() << " empaquetado correctamente" << endl;
		}
		else{
			cout << "Producto numero: " << producto->get_id() << " error en empaquetado" << endl;
		}
	}

	else{
		cout << "Tipo de maquina no identifiado" << endl;
	}

}












