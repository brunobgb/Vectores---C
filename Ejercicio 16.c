#include <stdio.h>

int main() {
 
    /*
    Ejercicio 16

    Leer un vector B de N componentes y un número entero A y encontrar el menor elemento
    del vector que sea mayor que el A leído.

    */

    int menorElemento, i = 0, A, N;

    printf("Introduzca un entero cualquiera: \n");   // Cualquiera (el entero)
    scanf("%d", &A);

    printf("Introduzca la cantidad de elementos del vector B: \n");
    scanf("%d", &N);

    int B[N];                                                       // Lectura de cantidad y elementos de B...

    printf("Introduzca los elementos del vector B: \n");
    scanf("%d", &B[i]);

    menorElemento = B[i];       // Asigna el primer elemento a B para comparar.

    for (i = 1; i < N; i++)
    {
        scanf("%d", &B[i]);

        if (B[i] > A)           // Si el elemento leído es mayor al entero...
        {
            if (menorElemento <= A)     // Se asigna a menorElemento remplazando al leído arriba (si este era menor o igual al entero)
            {
                menorElemento = B[i];
            }

            if (B[i] < menorElemento && B[i] > A)  // Si el elemento es menor al de arriba y mayor al entero, se vuelve el nuevo "menorElemento"
            {
                menorElemento = B[i];
            }              
        }        
    }
    
    printf("El menor elemento del vector B que es mayor que el entero A es %d \n", menorElemento);

    // dos horas tardé en hacer esta reverenda macanada de ejercicio

    return 0;
}