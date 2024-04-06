#include <stdio.h>

int main() {

    /*
    Ejercicio 6

    Dado un vector de K componentes, hacer un algoritmo que permita hallar el mayor y el menor elemento
    del vector con sus posiciones respectivas.

    */

    int K, i, posicionMenor, posicionMayor, mayorElemento, menorElemento;

    printf("Introduzca la cantidad de elementos del vector\n"); // <-- Lectura de cantidad de elementos.
    scanf("%d", &K);

    int F[K];

    printf("Introduzca los elementos del vector\n"); // <-- Lectura de elementos.

    scanf("%d", &F[0]);
    mayorElemento = F[0];  // <-- Se asigna el elemento como el mayor y como el menor. Para comparar.
    menorElemento = F[0];

    posicionMayor = 0; // Por si acaso. Por si alguna extraña razón llena el vector de elementos repetidos. Tekorei último ya tene que ser.
    posicionMenor = 0;

    for (i = 1; i < K; i++) {
        scanf("%d", &F[i]);

        if (F[i] > mayorElemento) {
            mayorElemento = F[i];
            posicionMayor = i;
        }                              // Comparaciones. Nada nuevo.                

        if (F[i] < menorElemento) {
            menorElemento = F[i];
            posicionMenor = i;
        }
    }

    printf("El mayor elemento del vector es: %d", mayorElemento);
    printf("\nSe encuentra en la posición: %d", posicionMayor);
                                                                        // Y se imprime el mayor y el menor elemento, con sus posiciones.
    printf("\nEl menor elemento del vector es: %d", menorElemento);
    printf("\nSe encuentra en la posición: %d", posicionMenor);

    return 0;
}