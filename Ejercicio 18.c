#include <stdio.h>

#define MAX_SIZE 100 // Tamaño máximo de A y B

int main() {

    /*
    Ejercicio 18
	
    Hallar la unión de A y B en un nuevo vector C, de manera que el vector C, no tenga elementos repetidos.
	
    */

    // No tuve la paciencia de hacer en c desde cero, primero hice en pseudocodigo:

    /*
    Algoritmo ejercicio_18
	
	romper = 0 //Maera necesario para mas tarde
	
    Escribir "Introduzca la cantidad de elementos del vector A"                //Cosas de pseudocodigo
    Leer N
	
    Dimension A[N]
	
    Escribir "Introduzca los elementos del vector A"
	
    Para i <- 1 Hasta N Con Paso 1 Hacer
        Leer A[i]
    Fin Para
	
    Escribir "Introduzca la cantidad de elementos del vector B"
    Leer L
	
    Dimension B[L]
	
    Escribir "Introduzca los elementos del vector B"
	
    Para i <- 1 Hasta L Con Paso 1 Hacer
        Leer B[i]
    Fin Para
	
    // Eliminar elementos duplicados de A
    Para i <- 1 Hasta N Con Paso 1 Hacer
        Para j <- i + 1 Hasta N Con Paso 1 Hacer
            Si A[i] == A[j] y romper == 0 Entonces
                // Desplazar elementos para eliminar el duplicado
                Para k <- j Hasta N - 1 Con Paso 1 Hacer // Reducir el rango del bucle
                    A[k] <- A[k + 1]
                Fin Para
                N <- N - 1 // Reducir el tamaño del vector
                j <- j - 1 // Ajustar el índice para verificar el siguiente elemento
				Si N == 1 Entonces //Si no pongo esta macanada, se rompe todo el programa de miercoles, empieza a restar llegando hasta -3w8945789238794 noseque y se queda en un bucle infinito. Esto pasa cuando le metes por ejemplo 5 elementos y TODOS son iguales, en otros casos no pasaba (creo). Imaginate si ejecutaba en mi notebook. 
					romper = 1
				FinSi
            Fin Si
        Fin Para
    Fin Para
	
	romper = 0 //Se reinicia el maera
	
    // Eliminar elementos duplicados de B
    Para i <- 1 Hasta L Con Paso 1 Hacer
        Para j <- i + 1 Hasta L Con Paso 1 Hacer
            Si B[i] == B[j] y romper == 0 Entonces
                // Desplazar elementos para eliminar el duplicado
                Para k <- j Hasta L - 1 Con Paso 1 Hacer // Reducir el rango del bucle
                    B[k] <- B[k + 1]
                Fin Para
                L <- L - 1 // Reducir el tamaño del vector
                j <- j - 1 // Ajustar el índice para verificar el siguiente elemento
				Si L == 1 Entonces //Lo mismo de antes
					romper = 1
				FinSi
            Fin Si
        Fin Para
    Fin Para
	
	romper = 0
	
	//Estas dos macanadas son para que se pueda verificar si es que el codigo oiko (o sea no te pide el ejercicio)
	
	Escribir "El vector A tiene ", [N]," componentes"
    Escribir "Los componentes del vector A son: "
    Para i <- 1 Hasta N Con Paso 1 Hacer
        Escribir A[i]
    Fin Para
	
	Escribir "El vector B tiene ", [L]," componentes"
    Escribir "Los componentes del vector B son: "
    Para i <- 1 Hasta L Con Paso 1 Hacer
        Escribir B[i]
    Fin Para
	
	//Crea el vector C a partir de la longitud de A y B (Ya estos dos SE SUPONEEE qiue no tienen elementos repetidos)
	Dimensionar C[N + L]
	
	// Copiar elementos de A a C
    Para i <- 1 Hasta N Con Paso 1 Hacer
        C[i] <- A[i]
    Fin Para
    
    // Copiar elementos de B a C
    Para i <- N + 1 Hasta N + L Con Paso 1 Hacer
        C[i] <- B[i - N]
    Fin Para
	
	Z = N + L
	Redimensionar C[Z]
	
	si N > L Entonces
		vectorMayor = N
	SiNo
		vectorMayor = L
	FinSi
	
	Para i <- 1 Hasta Z Con Paso 1 Hacer
        Para j <- i + 1 Hasta Z Con Paso 1 Hacer
            Si C[i] == C[j] y romper == 0 Entonces
                // Desplazar elementos para eliminar el duplicado
                Para k <- j Hasta Z - 1 Con Paso 1 Hacer
                    C[k] <- C[k + 1]
                Fin Para
                Z <- Z - 1 // Reducir la longitud del vector C
                j <- j - 1 // Ajustar el índice para verificar el siguiente elemento
				Si Z == vectorMayor Entonces
					romper = 1
				FinSi
            Fin Si
        Fin Para
    Fin Para
	
	//FINAL
	Escribir "Los componentes del vector C son: "
    Para i <- 1 Hasta Z Con Paso 1 Hacer
        Escribir C[i]
    Fin Para
	
Fin Algoritmo
    */

    // Eso transportado a c es:

    int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE * 2];
    int N, L, i, j, k, romper = 0, Z, vectorMayor;
                      //  ^^Esta macanada re importantante es

    printf("Introduzca la cantidad de elementos del vector A: ");
    scanf("%d", &N);
    printf("Introduzca los elementos del vector A:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Introduzca la cantidad de elementos del vector B: ");
    scanf("%d", &L);
    printf("Introduzca los elementos del vector B:\n");
    for (i = 0; i < L; i++) {
        scanf("%d", &B[i]);
    }

    // Eliminasió de duplicados
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (A[i] == A[j] && romper == 0) {
                for (k = j; k < N - 1; k++) {
                    A[k] = A[k + 1];
                }
                N--;
                j--;
                if (N == 1) {
                    romper = 1;
                }
            }
        }
    }

    romper = 0; // se reinicia para este de abajo

    for (i = 0; i < L; i++) {
        for (j = i + 1; j < L; j++) {
            if (B[i] == B[j] && romper == 0) {
                for (k = j; k < L - 1; k++) {
                    B[k] = B[k + 1];
                }
                L--;
                j--;
                if (L == 1) {
                    romper = 1;
                }
            }
        }
    }

    romper = 0;

    // Copiar elementos de A a C
    for (i = 0; i < N; i++) {
        C[i] = A[i];
    }

    // Copiar elementos de B a C
    for (i = N; i < N + L; i++) {
        C[i] = B[i - N];
    }

    Z = N + L;

    // Eliminar elementos duplicados de C
    vectorMayor = (N > L) ? N : L;
    for (i = 0; i < Z; i++) {
        for (j = i + 1; j < Z; j++) {
            if (C[i] == C[j] && romper == 0) {
                for (k = j; k < Z - 1; k++) {
                    C[k] = C[k + 1];
                }
                Z--;
                j--;
                if (Z == vectorMayor) {
                    romper = 1;
                }
            }
        }
    }

    // Mostrar vector C
    printf("Los componentes del vector C son:\n");
    for (i = 0; i < Z; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
