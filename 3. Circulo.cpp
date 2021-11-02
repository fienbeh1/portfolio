/* Programa: Área de una circunferencia (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
    float area, radio; // se declaran variables.

    printf( "\n   Introduzca radio: " );  // se imprime en pantalla la instrucción al usuario.
    scanf( "%f", &radio ); // se almacena float  &var  &radio

    area = 3.141592 * radio * radio;

    printf( "\n   El %crea de la circunferencia es: %.2f", 160, area );   //se utiliza un modificador %% //
                                                                        //para reducir el número de decimales//

    printf( "\n\n   Pulse una tecla para salir..." );  //orden para detener el programa
    getch(); /* Pausa */

    return 0;
}
