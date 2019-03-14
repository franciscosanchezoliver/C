/*
 Los "include" se llaman "comandos Preprocesador". Cuando creamos un proyecto vac�o y vemos estos includes ya
 estar�amos incluyendo c�digo para que pueda funcionar minimamente.
 -  stdio.h: esta librer�a se encarga de poder imprimir por pantalla.
 - stdlib.h: permite al compilador detectar la funci�n main. El main ser� el punto de entrada de la aplicaci�n,
             por lo que es necesario que todo proyecto tenga una funci�n main.
*/
#include <stdio.h>
#include <stdlib.h>

/*
  La funci�n main que vemos:
    - No tiene par�metros de entrada.
    - Devuelve un entero.
    - El valor de retorno 0 indica que la funci�n se ha ejecutado correctamente.
*/

int main()
{

    printf("Hello world!\n");
    return 0;
}
