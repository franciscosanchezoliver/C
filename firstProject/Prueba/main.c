/*
 Los "include" se llaman "comandos Preprocesador". Cuando creamos un proyecto vacío y vemos estos includes ya
 estaríamos incluyendo código para que pueda funcionar minimamente.
 -  stdio.h: esta librería se encarga de poder imprimir por pantalla.
 - stdlib.h: permite al compilador detectar la función main. El main será el punto de entrada de la aplicación,
             por lo que es necesario que todo proyecto tenga una función main.
*/
#include <stdio.h>
#include <stdlib.h>

/*
  La función main que vemos:
    - No tiene parámetros de entrada.
    - Devuelve un entero.
    - El valor de retorno 0 indica que la función se ha ejecutado correctamente.
*/

int main()
{

    printf("Hello world!\n");
    return 0;
}
