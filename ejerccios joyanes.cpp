#include <cstdlib>
#include <iostream>
using namespace std;

float suma (float a, float b);

int main (int argc, char *argv[])

{

    float numero, numero1, sumadenumeros;

    numero=2;
    numero1=3;
    sumadenumeros = suma (numero,numero1);
    cout<<"la suma de "  << numero << " y "  << numero1<< endl;
    cout<<  "es:" <<sumadenumeros<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

    float suma(float a, float b)

{
    return a + b;
}

