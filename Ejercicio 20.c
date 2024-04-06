#include <stdio.h>

int main() {
    
    /*
    Ejercicio 20

    Realizar un pseudocódigo que permita al Director del Consejo Supremo Electoral encontrar el número y
    el porcentaje de votos obtenidos por cada uno de los cuatro candidatos de la contienda electoral en relación
    a los votantes que asistieron a las urnas a depositar su voto.
    Lea en un arreglo la intención de voto de cada una de las personas.

    */

    // Este no entendí bien e hice dos ñembo programas "separados"

    // Programa para obtener el porcentaje de votos obtenidos de cada candidato.

    int votos_totales, candidato1, candidato2, candidato3, candidato4;

    printf("Introduzca el total de votos: \n");
    scanf("%d", &votos_totales);

    int votos_og = votos_totales;

    //Validación de votos totales

    while (votos_totales <= 0)
    {
        printf("Error, vuelva a introducir el total: \n");
        scanf("%d", &votos_totales);
    }
    
    //Registro de votos a cada candidato

    printf("¿Cuántas personas votaron por el candidato Antonio Leguizamón? \n");
    scanf("%d", &candidato1);

    votos_totales -= candidato1;

    while (votos_totales < 0 || candidato1 < 0) // <-- Revisa si es que no se introdujo una cantidad que sea menor a cero o que sobrepase los votos totales restantes
    {
        votos_totales += candidato1;
        printf("Error, vuelva a introducir: \n");
        scanf("%d", &candidato1);
        votos_totales -= candidato1;
    }
    
    printf("¿Cuántas personas votaron por la candidata Ana Centurión? \n");
    scanf("%d", &candidato2);

    votos_totales -= candidato2;

    while (votos_totales < 0 || candidato2 < 0)
    {
        votos_totales += candidato2;
        printf("Error, vuelva a introducir: \n");
        scanf("%d", &candidato2);
        votos_totales -= candidato2;
    }

    printf("¿Cuántas personas votaron por el candidato Carlos Mendieta? \n");
    scanf("%d", &candidato3);

    votos_totales -= candidato3;

    while (votos_totales < 0 || candidato3 < 0)
    {
        votos_totales += candidato3;
        printf("Error, vuelva a introducir: \n");
        scanf("%d", &candidato3);
        votos_totales -= candidato3;
    }

    printf("¿Cuántas personas votaron por la candidata Violeta Arias? \n");
    scanf("%d", &candidato4);

    votos_totales -= candidato4;

    while (votos_totales < 0 || candidato4 < 0)
    {
        votos_totales += candidato4;
        printf("Error, vuelva a introducir: \n");
        scanf("%d", &candidato4);
        votos_totales -= candidato4;
    }

    //Porcentaje de votos de cada candidato

    printf("El porcentaje de votos de cada candidato es: \n");
    printf("Antonio Leguizamón --> %.2f por ciento. \n", (float)(candidato1 * 100) / votos_og );
    printf("Ana Centurión --> %.2f por ciento. \n", (float)(candidato2 * 100) / votos_og );
    printf("Carlos Mendieta --> %.2f por ciento. \n", (float)(candidato3 * 100) / votos_og );
    printf("Violeta Arias --> %.2f por ciento. \n", (float)(candidato4 * 100) / votos_og );

    //Programa de Voto.

    int voto;
    char intencion_de_voto[2048];

    printf("Candidatos a Presidente de la República Periodo 2023 - 2028\n 1. Antonio Leguizamón \n 2. Ana Centurón \n 3. Carlos Mendieta \n 4. Violeta Arias \n \n Inserte su voto: \n");
    scanf("%d", &voto);

    //Validación del voto

    while (voto != 1 && voto != 2 && voto != 3 && voto != 4)
    {
        printf("Error, vuelva a introducir su voto \n");
        scanf("%d", &voto);
    }
    
    //Registro de la intención de voto usando 'switch' para los 4 casos

    switch (voto)
    {
    case 1:
        printf("¿Por qué ha votado por el candidato Antonio Leguizamón? \n");
        fgets(intencion_de_voto, sizeof(intencion_de_voto), stdin); // <-- 'scanf' solo registra una palabra
        break;
    case 2:
        printf("¿Por qué ha votado por la candidata Ana Centurión? \n");
        fgets(intencion_de_voto, sizeof(intencion_de_voto), stdin);
        break;
    case 3:
        printf("¿Por qué ha votado por el candidato Carlos Mendieta? \n");
        fgets(intencion_de_voto, sizeof(intencion_de_voto), stdin);
        break;
    case 4:
        printf("¿Por qué ha votado por la candidata Violeta Arias? \n");
        fgets(intencion_de_voto, sizeof(intencion_de_voto), stdin);
        break;
    }

    printf("Su voto ha sido registrado.");

    return 0;
}