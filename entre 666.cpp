using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 struct _discografia {
        char nombre[20];
        char telefono[12];
        struct _discografia  *siguiente;
        };

 struct _discografia *primero, *ultimo;

 void mostrar_menu() {
      printf("\n\nMenu:\n=====\n\n");
      printf("1.- Anadir elementos\n");
      printf("2.- Mostrar lista\n");
      printf("3.- Salir\n\n");
      printf("Escoge una opcion: ");
      fflush(stdout);
 }

 /* Con esta función añadimos un elemento al final de la lista */
 void anadir_elemento() {
      struct _discografia *nuevo;

      /* reservamos memoria para el nuevo elemento */
      nuevo = (struct _discografia *) malloc (sizeof(struct _discografia));
      printf("\nNuevo elemento:\n");
      printf("Nombre: "); fflush(stdout);
      gets(nuevo->nombre);
      printf("Teléfono: "); fflush(stdout);
      gets(nuevo->telefono);

      /* el campo siguiente va a ser NULL por ser el último elemento
         de la lista */
      nuevo->siguiente = NULL;

      /* ahora metemos el nuevo elemento en la lista. lo situamos
         al final de la lista */
      /* comprobamos si la lista está vacía. si primero==NULL es que no
         hay ningún elemento en la lista */
      if (primero==NULL) {
         printf( "Primer elemento\n");
         primero = nuevo;
         ultimo = nuevo;
         }
      else {
           /* el que hasta ahora era el último tiene que apuntar al nuevo */
           ultimo->siguiente = nuevo;
           /* hacemos que el nuevo sea ahora el último */
           ultimo = nuevo;
      }
 }

 void mostrar_lista(struct _discografia  *) {
      struct _discografia  *auxiliar; /* lo usamos para recorrer la lista */
      int i;

      i=0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while (auxiliar!=NULL) {
            printf( "Nombre: %s, Telefono: %s\n",
                    auxiliar->nombre,auxiliar->telefono);
            auxiliar = auxiliar->siguiente;
            i++;
      }
      if (i==0) printf( "\nLa lista está vacía!!\n" );
 }

 int main() {
     char opcion;

     primero = (struct _discografia *) NULL;
     ultimo = (struct _discografia *) NULL;
     do {
         mostrar_menu();
         opcion = getch();
             switch ( opcion ) {
                case '1': anadir_elemento();
                       break;
                case '2': mostrar_lista(primero);
                        break;
                case '3': exit( 1 );
                default: printf( "Opción no válida\n" );
                         break;
             }
     } while (opcion!='3');
 }
