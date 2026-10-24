/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : oper_aritm_una_integer_01.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-24
 * Modificado : Mostrar el uso de operadores ariméticos unarios con enteros (+, -, ++, --)
 *
 * Descripción:
 *
 * Compilación:
 *      gcc oper_aritm_una_integer_01.c -o oper_aritm_una_integer_01
 *
 * Ejecución:
 *      ./oper_aritm_una_integer_01
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>

int main(void)
{
    
    // Declaro e inicalizo dos variables enteras

    int numero_a = 75;
    int numero_b = 80;
    int expresion = 0;

    // Mensajes de salida de operaciones.

    printf("*****************************************************\n");
    printf("*    OPERADORES ARITMÉTICOS UNARIOS CON ENTEROS     *\n");
    printf("*****************************************************\n\n");

    printf(" Tenemos dos variables enteras con los valores: \n");
    printf("  numero_a: %d \n", numero_a);
    printf("  numero_b: %d \n \n", numero_b);

    printf(" haremos: numero_a = -(numero_a) \n");
    numero_a = -(numero_a);
    printf("    Ahora numero_a = %d \n \n", numero_a);

    // Repetimos la operación para devolver numero_a a su valor positivo.

    printf(" haremos: numero_a = -(numero_a) [Para devolverlo a valor positivo] \n");
    numero_a = -(numero_a);
    printf("    Ahora numero_a = %d \n \n", numero_a);

    // Usando el operador unario ++ como prefijo

    printf(" haremos: ++numero_b \n");
    ++numero_b;
    printf("      Ahora numero_b = %d \n \n", numero_b);

    // Usando el operador unario -- como prefijo

    printf(" haremos: --numero_b [Para devolver numero_b a su valor inicial] \n");
    --numero_b;
    printf("      Ahora numero_b = %d \n \n", numero_b);

    printf("Qué pasa si los operadores unarios están como postfijo, es decir, numero_a++ o numero_b-- \n");
    printf("oprima ENTER para continuar ejecutando el programa... \n");
    getchar();

    // Usando el operador unario ++ como postfijo

    printf("Trabajaremos con numero_a que tiene valor: %d \n", numero_a);
    printf(" haremos: numero_a++ \n");
    numero_a++;
    printf("    Ahora numero_a = %d \n \n", numero_a);

    printf("oprima ENTER para continuar ejecutando el programa... \n");
    getchar();

    // Explicando la diferencia entre prefijo y postfijo.

    printf(" NOTA IMPORTANTE: los operadores unarios (++ y --) aplicados como postfijo, \n");
    printf(" pueden analizarse en dos situaciones: \n \n");
    printf("  1. Cuando se aplican directamente sobre una variable. \n");
    printf("  2. Cuando la variable forma parte de una expresión. \n \n");
    printf(" Veamos el segundo caso, donde es posible observar la diferencia entre, \n");
    printf( " el operador prefijo ++numero_b o postfijo numero_b++ \n \n");

    printf(" Trabajaremos con numero_b que tiene valor: %d \n", numero_b);
    printf(" Haremos: expresion = expresion + numero_b++ \n \n");
    expresion = expresion + numero_b++;

    // Mostramos el resultado de la rexpresión aritmética.
    printf(" la variable expresion tiene el   valor: %d \n", expresion);
    printf(" Pero, la variable numero_b tiene valor: %d \n \n", numero_b);

    printf(" Pero, por qué? \n \n");
    printf(" En la expresión: \n  expresion = expresion + numero_b++ \n \n");
    printf(" Primero se utiliza el valor actual de numero_b para realizar la suma, \n");
    printf(" y después de finalizada la evaluación de la expresión,  \n");
    printf(" numero_b se incrementa en 1 unidad. \n \n");
    printf(" Por éste motivo, la variable expresion recibe el valor 80, \n");
    printf(" mientras que posteriormente numero_b pasa a valer 81. \n");


    return 0;
}