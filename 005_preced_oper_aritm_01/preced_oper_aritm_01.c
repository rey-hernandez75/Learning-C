/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : preced_oper_aritm_01.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-26
 * Modificado :
 *
 * Descripción: Mostrar la precedencia de los operadores aritméticos (+, -, *, /, %) El programa usará variables enteras.
 *
 * Compilación:
 *      gcc preced_oper_aritm_01.c -o preced_oper_aritm_01
 *
 * Ejecución:
 *      ./preced_oper_aritm_01
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>

int main(void)
{

    // Declaro e inicializo las variables a utilizar.

    int valor_1 = 27;
    int valor_2 = 4;
    int valor_3 = 30;
    int valor_4 = 40;

    int expresion_aritm = 0;

    // Preparando los mensajes de salida en pantalla.

    printf("******************************************************************************\n");
    printf("*             MOSTRANDO LA PRECEDENCIA DE OPERADORES ARITMÉTICOS             *\n");
    printf("******************************************************************************\n \n");

    // Ejemplificando operadores suma y resta.

    printf("*** EJEMPLO 1 OPERADORES SUMA Y RESTA. \n");
    printf("*_________________________________________________________________\n \n");
    printf("* Qué resultado tendrá: ? \n");
    printf("* a) expresion_aritm = valor_1 + valor_2 - valor_3 + valor_4 \n \n");
    printf("* \n");
    printf("*_________________________________________________________________\n");
    printf("Presione ENTER para ver la respuesta y continuar...\n");
    getchar();

    expresion_aritm = valor_1 + valor_2 - valor_3 + valor_4;

    printf(" expresion_aritm = %d \n\n", expresion_aritm);

    printf("RAZÓN: Los operadores de suma y resta tienen igual precedencia.\n");
    printf("       Dentro de una expresión, se evalúan de izquierda a derecha.\n");
    printf("       Pero, cómo lograr que en ésta expresión: \n \n");
    printf("        a) expresion_aritm = valor_1 + valor_2 - valor_3 + valor_4 \n \n");
    printf("        se ejecute primero: (valor_3 + valor_4) ? \n \n");
    printf("       Hacemos uso de paréntesis. La expresión queda: \n \n");
    printf("        a) expresion_aritm = valor_1 + valor_2 - (valor_3 + valor_4) \n \n");

    expresion_aritm = 0;
    expresion_aritm = valor_1 + valor_2 - (valor_3 + valor_4);

    printf("       Presione ENTER para ver la respuesta y continuar...\n \n");
    printf("        expresion_aritm = %d \n \n", expresion_aritm);

    printf("CONCLUSIÓN: Los paréntesis tienen mayor precedencia dentro de una expresión aritmética.\n");
    printf("            Toda operación encerrada entre () se evalúa antes que el resto de los operadores.\n");
    printf("            Cuando hay () anidados, primero se evalúan los () más internos, y luego los más externos.\n");
    printf("            de adentro hacia afuera.\n \n");
    printf("            ENTER para continuar. \n \n");

    getchar();

    // Devolviendo expresion_aritm a cero para otra operación.

    expresion_aritm = 0;

    //Ejemplificando operadores suma, resta y multiplicación.

    printf("*** EJEMPLO 2 OPERADORES SUMA Y/O RESTA Y MULTIPLICACIÓN. \n");
    printf("*_________________________________________________________________\n \n");
    printf("* Qué resultado tendrá: ? \n");
    printf("* a) expresion_aritm = valor_1 + valor_3 * valor_2 \n \n");
    printf("* \n");
    printf("*_________________________________________________________________\n \n");
    printf("Presione ENTER para ver la respuesta y continuar...\n");
    getchar();

    expresion_aritm = valor_1 + valor_3 * valor_2;

    printf(" expresion_aritm = %d \n\n", expresion_aritm);

    printf("RAZÓN: Los operadores multiplicación y división tienen mayor precedencia,\n");
    printf("       que los operadores de suma y resta. En el ejemplo 2, primero.\n");
    printf("       se multiplican valor_3 * valor_2 y,después se suma valor_1 \n");
    printf("       Pero, cómo lograr que en ésta expresión: \n \n");
    printf("        a) expresion_aritm = valor_1 + valor_3 * valor_2 \n \n");
    printf("        se ejecute primero: (valor_1 + valor_3) ? \n \n");
    printf("       Hacemos uso de paréntesis. La expresión queda: \n \n");
    printf("        a) expresion_aritm = (valor_1 + valor_3) * valor_2 \n \n");

    expresion_aritm = (valor_1 + valor_3) * valor_2;

    printf("       Presione ENTER para ver la respuesta y continuar...\n \n");

    getchar();

    printf("        expresion_aritm = %d \n \n", expresion_aritm);

    printf("CONCLUSIÓN: (Recuerda ésto) Los paréntesis tienen mayor precedencia,\n");
    printf("                            dentro de una expresión aritmética.\n");


    
    return 0;
}