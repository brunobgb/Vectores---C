#include <stdio.h>

int main() {
    
    /*
    Ejercicio 21

    Realize un pseudocódigo que lea un arreglo de N datos y asigne a sus elementos los valores 1, 4, 9, 16... etc.
    (12, 22, 32...).

    */

    int i, num = 1, N;

    printf("Introduzca la cantidad de elementos del vector: \n");
    scanf("%d", &N);

    int A[N];

    for (i = 0; i < N; i++)
    {
        A[i] = num * num;  // Tipo A[0] = 1^2, A[1] = 2^2, A[2] = 3^2...
        num += 1;
    }

    printf("Los elementos asignados al vector son: \n");
    for (i = 0; i < N; i++)                                 // Impresión
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}