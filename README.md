# Linea-Produccion
Simular una fabrica donde productos pasen por etapas: ensamblado, verificado y empaquetado. Estos procesos serán ejecutados por maquinas. Cada maquina tiene su comportamiento y margen de error Tolerable. Podemos registar errores y calcular la eficiencia de la linea en Reportes. El usuario decidirá lacantidad de productos a crear. Pensado para poder ser ejecutado en Terminal. El programá inicia con un menú donde el usuario puede iniciar la linea de producción, consultar reportes de simulaciones pasadas o cerrar el programa:
Opción 1: Se inicia una nueva de iteración de la linea de producción. El usuario escoge la cantidad de productos a crear. Cada producto es modificado por las maquinas y se imprime un Reporte.
Opción 2: Se navega por los Reportes de simulaciones pasada. El usuario puede abrir y comparar reportes entre simulaciones.
Opción 3: Se termina el programa.

Requisitos: 
Compilador compatible con C++11 o superior.
Terminal de comandos (Linux, macOS, o Git Bash/MinGW en Windows).


Errores fatales en Programa:

El numero de Reportes a guardar son 20, por lo que el usuario no podrá hacer mas de 20 iteraciones del simulador. En caso de pasar este limite, el programa dará un error debido a la interacción con el Array Reportes fuera de sus limites. 


En caso de dar un numero extremadamente grande de productos a crear, esto ocasionará el Crasheo del programa. Las instancias de producto se crean en el HEAP por lo que hay más espacio que en el STACK. Pero no es ilimitado el espació. 

La función std::this_thread::sleep_for fue implementada en versiones de c++ 11 adelante. Por lo que si no se cuenta con esta versión puede salir un error en terminal:
error: 'std::this_thread' has not been declared
En este caso se debe de incluir  la bandera g++ -std=c++11 en la compilación.





Compilar en Terminal

Para compilar en la terminal es necesario compilar todos los 6 archivo .cpp de los objetos. Debemos de compilar: main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp 

En el caso de Mac se puede usar los siguientes comandos en terminal: 

g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o "Nombre" 
g++ -std=c++11 main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o linea_produccion


En windows con MinGW podemos usar estos comandos: 

g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe
g++ -std=c++11 main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe

En el caso de Git Bash en windows usamos el siguiente comando: g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe


![UML drawio](https://github.com/user-attachments/assets/41105205-6ce6-422a-a320-23281fe0c14f)



