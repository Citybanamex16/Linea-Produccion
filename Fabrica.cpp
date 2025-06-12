  //Fabrica.cpp

#include "Fabrica.h"
#include <iostream>
#include <string>
#include <array>

//Librerías para retrasar couts en terminal.
#include <thread> // Solo disponible en c++ 11.
#include <chrono>


using namespace std;


// Constructor por Default. Se crean las 3 herencias de Maquina. No se crean productos.
Fabrica::Fabrica(){
	// Inicializamos los arrays de cada tipo.
	iteracion_fabrica = 0;
	string reportes[20];

	// Creamos los componentes de la fabrica
	
	// Creamos Instancias de las hijas de maquina en el HEAP y mantenemos apuntadores suyas en el STACK.
	Maquina* ensamblador = new Ensamblador(1,"Ensamblador");
	lista_Maquinas[0] = ensamblador;
	Maquina* verificador =  new Verificador(1,"Verificador");
	lista_Maquinas[1] = verificador;
	Maquina* empaquetador = new Empaquetador(1,"Empaquetador");
	lista_Maquinas[2] = empaquetador;
	
	num_productos = 1;

	for (int i = 0; i < 3; i++) {
        num_exitos[i] = 0;
        num_errores[i] = 0;
    }

    iteracion_fabrica = 0;

}

// Constructor donde se crean las Herencias de Maquina y la cantidad de productos dado por el usuario.
Fabrica::Fabrica(int _cantidad){
	iteracion_fabrica = 0;
	string reportes[20];

	//Creamos el array dinamico en el HEAP de tamaño _cantidad
	listaProductos = new Producto*[_cantidad];

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
	//cout << "Num_productos" << num_productos << endl;

	for (int i = 0; i < 3; i++) {
        num_exitos[i] = 0;
        num_errores[i] = 0;
    }
    iteracion_fabrica = 0;

}

/* Metodo que inicial la agregación de los productos a las maquinas y 
* su correspondiete proceso. En este metodo usamos Poliformismo al solo 
* llamar el metodo de la herencia del listado de maquinas. Despues de procesas
* un producto se pasa su apuntador y el tipo de maquina al metodo estado_del_producto(). 
* Este metodo imprime el resultado de cada producto en cada maquina. Al finalizar con todos 
* lo productos se regresa el reporte generado en la función Reporte().

*/
string Fabrica::iniciar_simulador(){

	iteracion_fabrica += 1;	

	cout << "Iteracion de fabrica numero " << iteracion_fabrica << endl;

	string tipo_maquina;
	cout << "numero de productos a generar: " << num_productos<< endl;

	for (int i = 0; i < num_productos;++i){
		//cada producto debe de entrar a las 3 maquinas. indice i para lista de Productos
		//cout << "i:" << i << endl;
		
		cout << endl;
		for(int j = 0; j<3; ++j){
			// j se reinicia cada ves que el loop de i se vuelve a ejecutar.
			lista_Maquinas[j]->set_producto(listaProductos[i]);
			lista_Maquinas[j]->procesar(); // Poliformismo

			tipo_maquina = lista_Maquinas[j]->get_type();

			//cout << "cout desde iniciar simulador "<<listaProductos[i]->get_id()<< endl;
			estado_del_producto(listaProductos[i],tipo_maquina);
			//Retrasar el siguiente cout


			
			std::this_thread::sleep_for(std::chrono::seconds(lista_Maquinas[j]->get_tiempo()));
			//cout << "j:" << j << endl;


		}
	cout<< "Producto numero: " << listaProductos[i]->get_id() << " Terminado. "<< endl;
	cout << endl;
	}

	return generar_reporte();

}


void Fabrica::estado_del_producto(Producto* producto,string tipo_maquina){
	/* Esta función recibe el puntero del producto y el tipo de maquina del que viene. Inspecciona si el producto fue correctamente modificado
	por la maquina. Imprime si el proceso se completo con exito o si hubo un error.*/

	//Ensamblador
	if(tipo_maquina == "Ensamblador"){

		if(producto->get_ensamblado() == true){
			cout << "Producto numero: " << producto->get_id() << " ensamblado correctamente" << endl;
			num_exitos[0] += 1;
		}
		else{
			cout << "Producto numero: " << producto->get_id() << " error en ensamblaje" << endl;
			num_errores[0]+=1;
		}
	}

	//Verificador
	else if(tipo_maquina == "Verificador"){
		if(producto->get_verificado() == true){
			cout << "Producto numero: " << producto->get_id() << " verificado correctamente" << endl;
			num_exitos[1] += 1;
		}
		else{
			cout << "Producto numero: " << producto->get_id() << " error en verificación" << endl;
			num_errores[1] +=1;
		}
	}

	//Empaquetador
	else if(tipo_maquina == "Empaquetador"){
		if(producto->get_empaquetado() == true){
			cout << "Producto numero: " << producto->get_id() << " empaquetado correctamente" << endl;
			num_exitos[2] += 1;
		}
		else{
			cout << "Producto numero: " << producto->get_id() << " error en empaquetado" << endl;
			num_errores[2] +=1;
		}
	}

	else{
		cout << "Tipo de maquina no identifiado" << endl;
	}

}

/* Metodo que genera reportes de cada maquina usando 
*  los arrays de numero de exitos y numero de errores
*  de cada maquina. El reporte generado aquí se guarda
*  en el array de Reportes. 
*/
string Fabrica::generar_reporte(){
	// numero de exitos, errores y eficiencia de cada maquina. 
	string Reporte_completo = " ";

	for(int i =0; i<3;i++){
		// Formato: tipo de maquina + numero de casos exitosos + numero de casos fallados + porcentaje de efectividad
		
		int total = num_exitos[i] + num_errores[i];

		float efectividad = (total > 0) ? (static_cast<float>(num_exitos[i]) / total) * 100.0f : 0.0f;

		Reporte_completo += "Simulación numero: " + to_string(iteracion_fabrica) + "\n";
		Reporte_completo += "Maquina: " + lista_Maquinas[i]->get_type() + "\n";
        Reporte_completo += "  - Numero de exitos: " + to_string(num_exitos[i]) + "\n";
        Reporte_completo += "  - Numero de errores: " + to_string(num_errores[i]) + "\n";
        Reporte_completo += "  - Efectividad: " + to_string(efectividad) + "%\n";
        Reporte_completo += "-----------------------------\n";

        
	}
	cout << "El numero de iteracion es " << iteracion_fabrica << endl;
	reportes[iteracion_fabrica] = Reporte_completo;
    cout << "Reporte Guardado" << endl;
	return Reporte_completo;

}


string Fabrica::get_reporte(int _index){
	return reportes[_index];

}

int Fabrica::get_iteraciones(){
	return iteracion_fabrica;
}


void Fabrica::crear_producto(int _cantidad){

	num_productos = _cantidad;
	//cout << "Estoy funcionando" << endl;
	//Creamos el array dinamico en el HEAP de tamaño _cantidad
	listaProductos = new Producto*[_cantidad];
	//Creamos instancias de productos segun la cantidad en el parametro.
	for(int i = 0; i < _cantidad; i++ ){
		Producto* producto = new Producto(i+1);
		listaProductos[i] = producto;
	}

}





