#include <stdio.h>

int main() {

    /*
    Ejercicio 8

    Hacer un algoritmo para crear un vector V, con todas las edades de los alumnos del quinto curso de
    informática, y luego calcular el promedio de las edades.

    */

    int suma = 0, i, V[29]; // <-- Hay 29 alumnos en nuestra clase
    float promedioSuma;

    printf("Introduzca las edades de los 29 alumnos: \n");

    for (i = 0; i < 29; i++) {
        scanf("%d", &V[i]);                 // <-- Ñectura de las edades.
        suma += V[i];
    }
 
    promedioSuma = (float)suma / 29;    // <-- convierte un elemento en float.

    printf("El promedio de las edades es %f\n", promedioSuma);

    return 0;
}