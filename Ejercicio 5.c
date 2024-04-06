#include <stdio.h>

int main() {

    /*
    Ejercicio 5

    Dado un vector de N elementos, hacer un algoritmo que permita hallar el mayor elemento del vector.

    */

    int N, i, mayorElemento;

    //Lectura de N (cantidad de componentes del vector).
    printf("Introduzca la cantidad de componentes del vector\n");
    scanf("%d", &N);

    int E[N];

    //Elementos del vector.
    printf("Introduzca los elementos del vector\n");

    scanf("%d", &E[0]);
    mayorElemento = E[0]; //<-- Se asigna el primer elemento leído a mayorElemento, para poder comparar más adelante.

    for (i = 1; i < N; i++) {
        scanf("%d", &E[i]);     // <-- Se leen los elementos y...

        if (E[i] > mayorElemento) {   // <-- ...si se lee un número mayor al introducido anteriormente, lo remplaza.
            mayorElemento = E[i];
        }
    }

    printf("El mayor elemento del vector es: %d", mayorElemento); // <-- printf de toda la vida.

    return 0;
}