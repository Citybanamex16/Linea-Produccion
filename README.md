# Linea-Produccion
Simular una fabrica donde productos pasen por etapas: ensamblado, verificado y empaquetado. Estos procesos serán ejecutados por maquinas. Cada maquina tiene su comportamiento y velocidad de operación. Podemos inducir errores y calcular la eficiencia de la linea. El usuario decidirá el tipo y cantidad de productos a crear. Pensado para poder ser ejecutado en Terminal. El programá inicia con la selección del tipo y la cantidad de productos a crear. Se inicia la linea de producción. Los productos de forma separada entran y con modificados pro cada maquina. Al final se hace un Reporte de la eficiencia de la linea. 

Errores fatales en Programa:
Utilizamos arrays estaticos con tamaño limite para almacenar a las instancias de maquinas y productos. El usuario proporciona la cantidad de productos a generar en el main, por lo que si este numero es mayor al limite, habrá un error. La clase Fabrica generará mas instancias de producto de los que puede almacenar en su array de productos. Esto genera un error en el programa.

La relación temporal de agregación entre la clase producto y las subclases de la clase maquina es fundamental para el correcto funcionamiento del programa. La instancia producto debe entrara en correcto orden (ensamblado -> verificación -> empaquetado) en donde entra, es modificado por la maquina, sale y repite el proceso con la siguiente maquina. La incorrecta aplicación del concepto de agregación puede provocar que no se modifique ningún objeto, por lo que la eficiencia sería de 0. 

Compilar en Terminal

Para copiar la terminal es necesario compilar todos los 6 archivo .cpp de los objetos. Debemos de compilar: main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp 

En el caso de Mac se puede usar el siguiente comando en terminal: 

g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o 

En windows con MinGW podemos usar este comando: g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe

En el caso de Git Bash en windows usamos el siguiente comando: g++ main.cpp Fabrica.cpp Producto.cpp Maquina.cpp Ensamblador.cpp Verificador.cpp Empaquetador.cpp -o main.exe





![UML drawio](https://github.com/user-attachments/assets/9510e44a-489f-41a1-8dce-d6f3f150f6c6)
