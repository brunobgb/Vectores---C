#include <stdio.h>

int main() {

    /*
    Ejercicio 1

    Leer un vector A de 50 componentes y un escalar X y calcular e imprimir la suma de la multiplicación
    del escalar por el vector.

    */

    //Declaración de variables.
    int A[50], x, i, multiplicacion = 0;  // La cantidad de elementos del vector ya fue especificada.

    printf("Introduzca un escalar x\n");  // <-- Lectura del escalar.
    scanf("%d", &x);

    printf("Introduzca los componentes del vector\n");

    //Asigna valores a los elementos, usa un acumulador para obtener lo requerido.
    for (i = 0; i < 50; i++) {
        scanf("%d", &A[i]);
        multiplicacion += A[i] * x;
    }

    printf("La suma de los componentes por el escalar es de: %d", multiplicacion); // Se imprime lo solicitado.

    return 0;
}