# Linea-Produccion
Simular una fabrica donde productos pasen por etapas: ensamblado, verificado y empaquetado. Estos procesos serán ejecutados por maquinas. Cada maquina tiene su comportamiento y velocidad de operación. Podemos inducir errores y calcular la eficiencia de la linea. El usuario decidirá el tipo y cantidad de productos a crear. Pensado para poder ser ejecutado en Terminal. El programá inicia con la selección del tipo y la cantidad de productos a crear. Se inicia la linea de producción. Los productos de forma separada entran y con modificados pro cada maquina. Al final se hace un Reporte de la eficiencia de la linea. 

Errores fatales en Programa:
La relación temporal de agregación entre la clase producto y las subclases de la clase maquina es fundamental para el correcto funcionamiento del programa. La instancia producto debe entrara en correcto orden (ensamblado -> verificación -> empaquetado) en donde entra, es modificado por la maquina, sale y repite el proceso con la siguiente maquina. La incorrecta aplicación del concepto de agregación puede provocar que no se modifique ningún objeto, por lo que la eficiencia sería de 0. 

![UML drawio](https://github.com/user-attachments/assets/9510e44a-489f-41a1-8dce-d6f3f150f6c6)
