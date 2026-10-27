/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : multiplo_de_tres_01.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-27
 * Modificado :
 *
 * Descripción: Mostrar un listado de números del 1 al 50, y decir cuáles son múltiplo de 3.
 *              Decir además cuántos son divisibles por 3. Y cuántos no lo son.
 *
 * Compilación:
 *      gcc multiplo_de_tres_01.c -o multiplo_de_tres_01
 *
 * Ejecución:
 *      ./multiplo_de_tres_01
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>

// Uso de define para indicar con cadenas si es múltiplo de 3 o no.

#define SI_MULTI "Sí es múltiplo de 3."
#define NO_MULTI "No es múltiplo de 3."

int main(void)
{
    
    // Declaro e inicializo las variables a utilizar.

    int oper_es_multip = -1;
    int cantidad_si_div = 0;
    int cantidad_no_div = 0;

    // Preparo la salida en pantalla.

    printf("******************************************************************************\n");
    printf("*       LISTA DE NÚMEROS DEL 1 AL 50. Y CUÁLES SON DIVISIBLES POR 3.         *\n");
    printf("******************************************************************************\n");

    for (int i = 1; i <= 50; i++)
    {
        printf(" El número: %2d ", i );
            oper_es_multip = i % 3;
                if (0 == oper_es_multip)
                {
                    ++cantidad_si_div;
                    printf("%s \n", SI_MULTI);
                }
                else
                {
                    ++cantidad_no_div;
                    printf("%s \n", NO_MULTI);
                }


    }

    // Mostrando cuántos sí son divisibles por 3 y cuántos no lo son.

    printf("\n-------------------------------------------------------------\n");
    printf("Cantidad  de  números  divisibles por tres son: %2d \n", cantidad_si_div);
    printf("Cantidad de números NO divisibles por tres son: %2d \n", cantidad_no_div);


    return 0;
}