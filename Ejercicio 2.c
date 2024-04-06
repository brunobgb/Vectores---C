#include <stdio.h>

int main() {

    //Declaración de variables.
    int B[30], i, suma = 0;

    printf("Introduzca el valor de los componentes\n");


    //Lectura de valores...
    for (i = 0; i < 30; i++) {
        scanf("%d", &B[i]);
        suma += B[i];
    }

    //Obtención del promedio, se convierte suma a float para no truncar el resultado.
    float promedioSuma = (float)suma / 30;

    printf("El promedio de la suma de todos los componentes del vector es: %f", promedioSuma);

    return 0;
}