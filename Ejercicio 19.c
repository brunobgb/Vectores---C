#include <stdio.h>

int main() {
    
    /*
    Ejercicio 19

    Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo vector por pantalla, pero
    invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería imprimir 10 9 8 7 6 5 4 3 2 1.

    */

    int aux, i, A[10];

    printf("Introduzca los 10 elementos del vector: \n");  // Lectura de los elementos

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for (i = 0; i < 5; i++)   // Invierte el vector
    {
        aux = A[i];
        A[i] = A[9 - i];
        A[9 - i] = aux;
    }
    
    printf("El vector, pero invertido: \n");

    for (i = 0; i < 10; i++)
    {
        printf("%d, ", A[i]);
    }    

    // La diferencia de este y el 18...

    return 0;
}