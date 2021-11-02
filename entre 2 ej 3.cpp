#include <iostream>

#include<conio.h>

using namespace std;

int f(int o){ //definir variables

	int s,a=0,b=1,c=1;

	while(c<=o){

		s=a+b;

		a=b;

		b=s;

		c++;

	}

	return s;

}

int main(){

	int s,o;

	cout<<"Introduce numero mayor a 1: ";cin>>o; // SE SOLICITA ENTRADA

	s=f(o);

	cout<<"La serie va en :"<<s<<endl;  // EL RESULTADO DE LA SERIE DE FIBONACCI ES EL ELEMENTO DADO

	cout<<"    Presione una tecla para salir"; // SE SIGUE HASTA QUE SE PRESIONA LA TECLA

	getch();

}
