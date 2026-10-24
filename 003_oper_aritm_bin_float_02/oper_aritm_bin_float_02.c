/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : oper_aritm_bin_float_02.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-24
 * Modificado : 
 *
 * Descripción: Mostrar el uso de operadores aritméticos con el tipo de datos float.
 *
 * Compilación:
 *      gcc oper_aritm_bin_float_02.c -o oper_aritm_bin_float_02
 *
 * Ejecución:
 *      ./oper_aritm_bin_float_02
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>

int main(void)
{

    // Declaro e inicializo dos variables tipo float.

    float decimal_1 = 15.75f;
    float decimal_2 = 2.25f;

    //Declaro e inicializo a cero las variables para operaciones aritméticas.

    float suma_decimales = 0;
    float resta_decimales = 0;
    float multiplica_decimales = 0;
    float divide_decimales = 0;

    // Mensajes de salida de operaciones.

    printf("*****************************************************\n");
    printf("*   OPERADORES ARITMÉTICOS BINARIOS CON DECIMALES   *\n");
    printf("*****************************************************\n\n");

    printf(" Tenemos dos variables decimales con valores: \n\n");
    printf(" decimal_1: %.3f \n", decimal_1);
    printf(" decimal_2: %.3f \n\n", decimal_2);

    // Operaciones aritméticas y sus respectivas salidas.

    suma_decimales = decimal_1 + decimal_2;
    printf("            Suma: %.3f \n", suma_decimales);

    resta_decimales = decimal_1 - decimal_2;
    printf("           Resta: %.3f \n", resta_decimales);

    multiplica_decimales = decimal_1 * decimal_2;
    printf("  Multiplicación: %.3f \n", multiplica_decimales);

    divide_decimales = decimal_1 / decimal_2;
    printf("        División: %.3f \n", divide_decimales);


    return 0;
}