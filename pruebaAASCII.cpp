#include <cstdlib>
#include <iostream>

using namespace std;
char dato; // car�cter
unsigned char dato1; //declaraci�n de tipo car�cter sin signo
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
