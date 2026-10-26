/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : oper_aritm_una_float_02.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-26
 * Modificado : Mostrar el uso de operadores unarios con decimales (float). Operadores (+, -, ++, --)
 *
 * Descripción:
 *
 * Compilación:
 *      gcc oper_aritm_una_float_02.c -o oper_aritm_una_float_02
 *
 * Ejecución:
 *      ./oper_aritm_una_float_02
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>

int main(void)
{
    
// Declaro e inicalizo dos variables decimales

    float decimal_a = 75.25f;
    float decimal_b = 80.75f;
    float expresion = 0;

    // Mensajes de salida de operaciones.

    printf("*****************************************************\n");
    printf("*   OPERADORES ARITMÉTICOS UNARIOS CON DECIMALES    *\n");
    printf("*****************************************************\n\n");

    printf(" Tenemos dos variables decimales con los valores: \n");
    printf("  decimal_a: %.2f \n", decimal_a);
    printf("  decimal_b: %.2f \n \n", decimal_b);

    printf(" haremos: decimal_a = -(decimal_a) \n");
    decimal_a = -(decimal_a);
    printf("    Ahora decimal_a = %.2f \n \n", decimal_a);

    // Repetimos la operación para devolver decimal_a a su valor positivo.

    printf(" haremos: decimal_a = -(decimal_a) [Para devolverlo a valor positivo] \n");
    decimal_a = -(decimal_a);
    printf("    Ahora decimal_a = %.2f \n \n", decimal_a);

    // Usando el operador unario ++ como prefijo

    printf(" haremos: ++decimal_b \n");
    ++decimal_b;
    printf("      Ahora decimal_b = %.2f \n \n", decimal_b);

    // Usando el operador unario -- como prefijo

    printf(" haremos: --decimal_b [Para devolver decimal_b a su valor inicial] \n");
    --decimal_b;
    printf("      Ahora decimal_b = %.2f \n \n", decimal_b);

    printf("Qué pasa si los operadores unarios están como postfijo, es decir, decimal_a++ o decimal_b-- \n");
    printf("oprima ENTER para continuar ejecutando el programa... \n");
    getchar();

    // Usando el operador unario ++ como postfijo

    printf("Trabajaremos con decimal_a que tiene valor: %.2f \n", decimal_a);
    printf(" haremos: decimal_a++ \n");
    decimal_a++;
    printf("    Ahora decimal_a = %.2f \n \n", decimal_a);

    printf("oprima ENTER para continuar ejecutando el programa... \n");
    getchar();

    // Explicando la diferencia entre prefijo y postfijo.

    printf(" NOTA IMPORTANTE: los operadores unarios (++ y --) aplicados como postfijo, \n");
    printf(" pueden analizarse en dos situaciones: \n \n");
    printf("  1. Cuando se aplican directamente sobre una variable. \n");
    printf("  2. Cuando la variable forma parte de una expresión. \n \n");
    printf(" Veamos el segundo caso, donde es posible observar la diferencia entre, \n");
    printf( " el operador prefijo ++decimal_b o postfijo decimal_b++ \n \n");

    printf(" Trabajaremos con decimal_b que tiene valor: %.2f \n", decimal_b);
    printf(" Haremos: expresion = expresion + decimal_b++ \n \n");
    expresion = expresion + decimal_b++;

    // Mostramos el resultado de la rexpresión aritmética.
    printf(" la variable expresion tiene el    valor: %.2f \n", expresion);
    printf(" Pero, la variable decimal_b tiene valor: %.2f \n \n", decimal_b);

    printf(" Pero, por qué? \n \n");
    printf(" En la expresión: \n  expresion = expresion + decimal_b++ \n \n");
    printf(" Primero se utiliza el valor actual de decimal_b para realizar la suma, \n");
    printf(" y después de finalizada la evaluación de la expresión,  \n");
    printf(" decimal_b se incrementa en 1 unidad. \n \n");
    printf(" Por éste motivo, la variable expresion recibe el valor 80.75, \n");
    printf(" mientras que posteriormente decimal_b pasa a valer 81.75. \n");


    return 0;
}