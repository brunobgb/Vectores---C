#include <stdio.h>

int main() {

    /*
    Ejercicio 4

    Leer un vector de N componentes. Hallar e imprimir el promedio de todas sus posiciones impares.

    */

    //Variables.
    int N, suma = 0, i, contadorImpares = 0;
    float promedioSuma;

    //Lectura de cantidad de componentes. Primera vez.
    printf("Introduzca la cantidad de componentes del vector\n");
    scanf("%d", &N);

    int D[N];

    //Ahora si se leen los valores.
    printf("Introduzca el valor de los componentes\n");

    for (i = 0; i < N; i++) {
        scanf("%d", &D[i]);

        /* Si la posición es impar, se guarda para el promedio (Nota: El elemento D[0] lo considero POSICIÓN impar,
        al ser el primer (1) elemento leído, porsiacaso). */
        if ((i + 1) % 2 != 0) {
            suma += D[i];
            contadorImpares++;
        }
    }

    if (contadorImpares != 0) {
        promedioSuma = (float)suma / contadorImpares;
        printf("El promedio de los valores de las posiciones impares es: %f", promedioSuma); // Se obtiene el promedio
    } else {
        printf("No hay valores válidos en posiciones impares."); // <-- imaginate mi compu si hiciese 0 / 0
    }

    return 0;
}