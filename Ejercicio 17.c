#include <stdio.h>

int main() {
    
    /*
    Ejercicio 17

    Leer dos vectores A y B ambos de longitud N y luego calcular e imprimir el vector C que sea la suma de A y B
    sabiendo que: C(I) = A(I) + B(I)

    */

    int N, i;

    printf("Introduce la longitud de los vectores (A, B): \n");
    scanf("%d", &N);

    int A[N], B[N], C[N];

    printf("Introduce los elementos del vector A: \n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);                                     // Longitud de A y B, elementos de A y B...
    }

    printf("Introduce los elementos del vector B: \n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("Los elementos del vector C (Suma de A y B) son: \n");
    for (i = 0; i < N; i++)
    {                                                               // Directamente imprime los elementos, no se si es necesario crear luego el vector
        C[i] = A[i] + B[i];
        printf("%d, ", C[i]);
    }

    return 0;
}