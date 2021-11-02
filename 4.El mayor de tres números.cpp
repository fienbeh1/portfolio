#include <stdio.h>

    int main (){


        int x,y,z,maxx,minn;

        printf("Digite valor de x: ");
        scanf("%i",&x);
        printf("Digite valor de y: ");
        scanf("%i",&y);
        printf("Digite valor de z: ");
        scanf("%i",&z);

        if (x>y) {
            if (x>z){
                maxx=x;
            }
            else{
                maxx=z;
            }
        }
        else {
            if(y>z){
                maxx=y;}
            else{
                maxx=z;
}}
        printf("EL mayor de los 3 numeros es: %i.\n",maxx);


     return 0;
    }
