#include <iostream>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;

    cout << "Ingrese un numero y su potencia:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;

    return 0;
}
