 //main.cpp

#include <iostream>
#include <string>
#include <array>

#include "Fabrica.h"
using namespace std;

int main(){
	while(true){
	int valor_usuario;
	cout << "Bienvenido a la Fabrica" << endl;

	cout << "¿Cuantos productos quieres generar?" << endl;
	cin >> valor_usuario;

	if(valor_usuario <= 20){
	Fabrica fabrica(valor_usuario);
	cout << fabrica.iniciar_simulador() << endl;
	break;
	
}
	else {
		cout << "Sobrecarga, Limite de productos excedido, intentar otra vez" << endl;
		continue;
	}
}

cout << "Fin de la simulación" << endl;
return 0;
};

