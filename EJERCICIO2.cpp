#include <stdio.h>
#include <conio.h>
#include "iostream"
using namespace std;

int main ( )
{

    float x, iva, r;
    cout <<"bienvenido, calcularemos el precio de un articulo sin el iva"<<endl;
    cout <<"Introducir el precio del articulo";
    cin>> x;
    iva= 16*x/100;
    r=x-iva;
    cout <<"EL precio del articulo sin iva es: "<< r;
    getch(); //pausa
    return 0;

}
