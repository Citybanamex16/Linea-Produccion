# Linea-Produccion
Simular una fabrica donde productos pasen por etapas: ensamblado, verificado y empaquetado. Estos procesos serán ejecutados por maquinas. Cada maquina tiene su comportamiento y velocidad de operación. Podemos inducir errores y calcular la eficiencia de la linea. El usuario decidirá el tipo y cantidad de productos a crear. Pensado para poder ser ejecutado en Terminal. El programá inicia con la selección del tipo y la cantidad de productos a crear. Se inicia la linea de producción. Los productos de forma separada entran y con modificados pro cada maquina. Al final se hace un Reporte de la eficiencia de la linea. 

Errores fatales en Programa:

En caso de dar un numero extremadamente grande de productos a crear, esto ocasionará el Crasheo del programa. Las instancias de producto se crean en el HEAP por lo que hay mas espacio que en el STACK. Pero no es ilimitado el espació. 

En caso de querer modificar el programa para agregar un Loop en el main y querer repetir la linea de ensamblaje varías veces, hay varías cuestiones a considerar. Como se mencionó antes, los productos son creados en el HEAP. Por lo que no son eliminadas cuando las funciones finalizan. Se debe de implementar una forma de eliminar los productos de la linea de producción pasada para evitar Memory Leaks. 

Compilar en Terminal

Para compilar en la terminal es necesario compilar todos los 6 archivo .cpp de los objetos. Debemos de compilar: main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp 

En el caso de Mac se puede usar el siguiente comando en terminal: 

g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o "Nombre" 

En windows con MinGW podemos usar este comando: g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe

En el caso de Git Bash en windows usamos el siguiente comando: g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe


![UML drawio](https://github.com/user-attachments/assets/41105205-6ce6-422a-a320-23281fe0c14f)



