/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : oper_aritm_bin_01.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-23
 * Modificado :
 *
 * Descripción:
 *
 * Compilación:
 *      gcc oper_aritm_bin_01.c -o oper_aritm_bin_01
 *
 * Ejecución:
 *      ./oper_aritm_bin_01
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>

int main(void)
{
    
// Variables para ejemplificar el uso de operadores.
    int numero_a = 15;
    int numero_b = 7;

    // Variables para guardar resultados de operaciones aritméticas
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;
    int division_modulo = 0;


    printf("*****************************************************\n");
    printf("*          OPERADORES ARITMÉTICOS BINARIOS.         *\n");
    printf("*****************************************************\n\n");
    
    printf(" Tenemos 2 números enteros: \n\n");
    printf("  Número a: %d \n", numero_a);
    printf("  Número b: %d \n\n", numero_b);

    suma = numero_a + numero_b;
    printf("   Suma: %d \n", suma);
    resta = numero_a - numero_b;
    printf("   Resta: %d \n", resta);
    multiplicacion = numero_a * numero_b;
    printf("   Multiplicación: %d \n", multiplicacion);
    division = numero_a / numero_b;
    printf("   División: %d \n", division);
    division_modulo = numero_a % numero_b;
    printf("   División módulo: %d \n \n", division_modulo);

    return 0;
}