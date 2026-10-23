/******************************************************************************
 * Proyecto   : Learning C
 * Archivo    : tipos_var_01.c
 * Autor      : Rey Hdez
 * Creado     : 2026-10-23
 * Modificado :
 *
 * Descripción:
 *
 * Compilación:
 *      gcc tipos_var_01.c -o tipos_var_01
 *
 * Ejecución:
 *      ./tipos_var_01
 *
 * Sistema:
 *      Linux Mint 22.3 Cinnamon
 ******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    
// Declaro e inicio las variables a utilizar. (18) variables.
    char c = 'a';
    signed char sc = 'b';
    unsigned char uc = 'c';
    short s = 0;
    signed short sh = 0;
    unsigned short ush = 0;
    int i = 0;
    signed int si = 0;
    unsigned int ui = 0;
    long l = 0;
    signed long long int slli = 0;
    unsigned long ul = 0;
    unsigned long long int ulli = 0;
    long long ll = 0;
    unsigned long long ull = 0;
    float f = 0.0f;
    double d = 0.0;
    long double ld = 0.0L;

    // Mensaje de encabezado y muestro el valor y tamaño de cada variable

    printf("Variables y sus valores iniciales: \t Tamaño del tipo: \n \n");
    printf(" Variable c     de tipo char:                   = %-8c Tamaño: = %3zu byte \n", c, sizeof(char));
    printf(" Variable sc    de tipo signed char:            = %-8c Tamaño: = %3zu byte \n", sc, sizeof(signed char));
    printf(" Variable uc    de tipo unsigned char:          = %-8c Tamaño: = %3zu byte \n", uc, sizeof(unsigned char));
    printf(" Variable s     de tipo short:                  = %-8hd Tamaño: = %3zu bytes \n", s, sizeof(short));
    printf(" Variable sh    de tipo signed short:           = %-8hd Tamaño: = %3zu bytes \n", sh, sizeof(signed short));
    printf(" Variable ush   de tipo unsigned short:         = %-8hu Tamaño: = %3zu bytes \n", ush, sizeof(unsigned short));
    printf(" Variable i     de tipo int :                   = %-8d Tamaño: = %3zu bytes \n", i, sizeof(int));
    printf(" Variable si    de tipo signed int:             = %-8d Tamaño: = %3zu bytes \n", si, sizeof(signed int));
    printf(" Variable ui    de tipo unsigned int:           = %-8u Tamaño: = %3zu bytes \n", ui, sizeof(unsigned int));
    printf(" Variable l     de tipo long:                   = %-8ld Tamaño: = %3zu bytes \n", l, sizeof(long));
    printf(" Variable slli  de tipo signed long long int:   = %-8lld Tamaño: = %3zu bytes \n", slli, sizeof(signed long long int));
    printf(" variable ul    de tipo unsigned long:          = %-8lu Tamaño: = %3zu bytes \n", ul, sizeof(unsigned long));
    printf(" variable ulli  de tipo unsigned long long int: = %-8llu Tamaño: = %3zu bytes \n", ulli, sizeof(unsigned long long int));
    printf(" Variable ll    de tipo long long:              = %-8lld Tamaño: = %3zu bytes \n", ll, sizeof(unsigned long));
    printf(" Variable ull   de tipo unsigned long long:     = %-8llu Tamaño: = %3zu bytes \n", ull, sizeof(unsigned long long));
    printf(" Variable f     de tipo float:                  = %-8f Tamaño: = %3zu bytes \n", f, sizeof(float));
    printf(" Variable d     de tipo double:                 = %-8f Tamaño: = %3zu bytes \n", d, sizeof(double));
    printf(" Variable ld    de tipo long double:            = %-8Lf Tamaño: = %3zu bytes \n \n", ld, sizeof(long double));

    printf("\t En este sistema 1 byte: = %d \n \n", CHAR_BIT);


    return(0);
}