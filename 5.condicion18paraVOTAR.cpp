#include<stdio.h>
int main(){
 int E;
 printf("Inserte la edad: "); //se imprime instruccion para el usuario
 scanf("%d",&E);
 if (E>=0 && E<=17) // se establece la condicion 18 mayor o igual
 printf("\nLo siento, eres menor de edad, no puedes votar.");
 if (E>18)// se establece la condicion
 printf("\nFelicidades, eres mayor de edad, puedes votar. ");

return 0;
}
