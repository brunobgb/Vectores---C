#include <stdio.h>

int main() {

    /*
    Ejercicio 3

    Leer un vector de 20 componentes. Multiplicar sus elementos y al finalizar imprimir
    el resultado.

    */

    //Variables.
    int multiplicacion = 1, i, C[20];

    printf("Introduzca los valores\n");

    //Valores del vector.
    for (i = 0; i < 20; i++) {
        scanf("%d", &C[i]);
        multiplicacion *= C[i];
    }

    //Se imprime la multiplicación de los elementos.
    printf("La multiplicación de todos sus componentes es: %d", multiplicacion);

    return 0;
}