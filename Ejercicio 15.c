#include <stdio.h>

int main() {
    
    /*
    Ejercicio 15

    Sabiendo que se tiene en memoria los vectores P, A, M de tamaños H, J, I respectivamente, hacer
    un algoritmo que permita crear un vector Z de tal manera que P sea la primera parte de Z, A la
    continuación y M sea la última parte.

    */

    int H, J, I, i;

    printf("Introduzca la cantidad de elementos del vector P: \n");
    scanf("%d", &H);

    printf("Introduzca la cantidad de elementos del vector A: \n");    // Lectura de la cantidad de los 3 vectores.
    scanf("%d", &J);

    printf("Introduzca la cantidad de elementos del vector M: \n");
    scanf("%d", &I);

    int P[H], A[J], M[I];

    printf("Introduzca los elementos del vector P: \n");
    for (i = 0; i < H; i++)
    {
        scanf("%d", &P[i]);
    }

    printf("Introduzca los elementos del vector A: \n");     // Lectura de los elementos de los 3 vectores.
    for (i = 0; i < J; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Introduzca los elementos del vector M: \n");
    for (i = 0; i < I; i++)
    {
        scanf("%d", &M[i]);
    }
    
    int Z[H + J + I];

    for (i = 0; i < H; i++) {
        Z[i] = P[i];
    }

    for (i = 0; i < J; i++) {     //Crea el vector Z a partir de P, A y M.
        Z[i + H] = A[i];
    }

    for (i = 0; i < I; i++) {
        Z[i + H + J] = M[i];
    }

    printf("Los elementos del vector Z son: \n");

    for (i = 0; i < (H + J +I); i++)
    {
        printf("%d ", Z[i]);
    }
    
    
    return 0;
}