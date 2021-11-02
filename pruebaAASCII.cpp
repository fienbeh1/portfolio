#include <cstdlib>
#include <iostream>

using namespace std;
char dato; // carácter
unsigned char dato1; //declaración de tipo carácter sin signo
int main(int argc, char *argv[])

{
cout << " char unsigned char " << endl;
cout << " ASCII CAR ASCII CAR " << endl;
for (int i = 115; i < 136; i++)
{
dato = i; dato1 = i;
cout << (int) dato << " " << dato << " ";
cout << (int) dato1 << " " << dato1<< endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}
