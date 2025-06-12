 //main.cpp



/*
 * Proyecto Simulador de Linea de Producción
 * Carlos Delgado Contreras 
 * A01712819
 * 11/06/2025
 *
 * Este es un proyecto  para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que simula una linea de producción donde cierta
 * cantidad de productos son emsamblados, verificados y empaquetados. El
 * usuario puede elegir que cantidad de productos quiere crear. Al finalizar
 * la linea de producción se imprime un reporte con los errores, exitos y
 * porcentaje de eficacia en cada maquina. El usuario tambien podrá acceder
 * a reportes de simulaciones pasadas.
 */

#include <iostream> // Imprimir 
#include <string> // String de las impresiones


#include "Fabrica.h" /* Incluir la clase composición. 
Incluye a sus composiciones Producto y Maquina. */

using namespace std;

void menu(){
	cout << "1. Iniciar Simulador" << endl;
	cout << "2. Consultar simulaciones " << endl;
	cout << "3. Finalizar Fabrica" << endl;
	cout << "" << endl;
};



int main(){

	cout << "Bienvenido a la Fabrica" << endl;
	Fabrica fabrica = Fabrica();

	while(true){

	
	menu();


	int opcion_usuario;
	cin >> opcion_usuario;



	// 1. Iniciar Iteracion de simulación
	if(opcion_usuario ==1){

	int valor_usuario;
	

	cout << "¿Cuantos productos quieres generar?" << endl;
	cin >> valor_usuario;

	if(valor_usuario <= 20){

	fabrica.crear_producto(valor_usuario);
	cout << fabrica.iniciar_simulador() << endl;
	continue;
	
}
	else {
		cout << "Sobrecarga, Limite de productos excedido, intentar otra vez" << endl;
		continue;
	}
}
	// 2. Consultar simulaciones pasadas.
	else if(opcion_usuario ==2){
		int numero_de_reportes = fabrica.get_iteraciones();
		cout << "Numero de Reportes " << numero_de_reportes << endl;

		if(numero_de_reportes > 0){


		cout << "Historial de Reportes "<< endl;
		for (int i=0; i < numero_de_reportes; i++){
			cout << "Reporte numero " << i+1 << endl;

		}
		cout << "¿Qué Simulación quieres Consultar? " << endl;
		int consulta;
		cin >> consulta;

		if(consulta < numero_de_reportes+1){

		cout << fabrica.get_reporte(consulta) << endl;
		continue;}

		else{
			cout << "Selección fuera de rango de Reportes" << endl;
		}
	}

	else{
	cout << "No reportes Disponibles" << endl;
	}

}
	//Salir de la simulación
	else if (opcion_usuario == 3){
		break;
	}


	//Input de Jugador fuera de opciones
	else{
		cout << "Opcion no disponible" << endl;
		continue;
	}




}

cout << "Fin de la simulación" << endl;
return 0;
};

