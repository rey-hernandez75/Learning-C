/*
==============================================================================
 Programa : 002 - Tipos de Datos Fundamentales en C
 Archivo  : main.c

 Descripción:
 Este programa muestra los tipos de datos fundamentales del lenguaje C,
 su tamaño en memoria (sizeof), sus valores mínimo y máximo definidos por
 la implementación y un ejemplo de inicialización.

 Autor    : Reinel Hernandez
 Fecha    : 09/08/2026
 Compilador recomendado:
     gcc -Wall -Wextra -pedantic -std=c17
==============================================================================
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    /* Declaración e inicialización de variables */

    /* Tipos de caracteres */
    char                    c = 'a';
    signed char             sc = 'b';
    unsigned char           uc = 'c';

    /* Tipos enteros */
    short                   s = 0;
    signed short            sh = 0;
    unsigned short          ush = 0;
    int                     i = 0;
    signed int              si = 0;
    unsigned int            ui = 0;
    long                    l = 0;
    signed long long int    slli = 0;
    unsigned long           ul = 0;
    unsigned long long int  ulli = 0;
    long long               ll = 0;
    unsigned long long      ull = 0;

    /* Tipos en coma flotante */
    float                   f = 0.0f;
    double                  d = 0.0;
    long double             ld = 0.0L;

    /*
    ========================================================================
                    TABLA DE TIPOS DE DATOS
    ========================================================================
    */

    printf("\n");
    printf("==============================================================================================\n");
    printf("                         TIPOS DE DATOS FUNDAMENTALES DE C\n");
    printf("==============================================================================================\n");
    printf("%-8s %-32s %-8s %-24s %-24s %-15s\n", "Variable", "Tipo", "Bytes", "Valor mínimo", "Valor máximo", "Valor inicial");
    printf("----------------------------------------------------------------------------------------------\n");

    printf("%-8s %-32s %-8zu %-24d %-24d %-15c\n", "c", "char", sizeof(char), CHAR_MIN, CHAR_MAX, c);
    printf("%-8s %-32s %-8zu %-24d %-24d %-15c\n", "sc", "signed char", sizeof(signed char), SCHAR_MIN, SCHAR_MAX, sc);
    printf("%-8s %-32s %-8zu %-24u %-24u %-15c\n", "uc", "unsigned char", sizeof(unsigned char), 0u, UCHAR_MAX, uc);
    printf("%-8s %-32s %-8zu %-24d %-24d %-15hd\n", "s", "short", sizeof(short), SHRT_MIN, SHRT_MAX, s);
    printf("%-8s %-32s %-8zu %-24d %-24d %-15hd\n", "sh", "signed short", sizeof(signed short), SHRT_MIN, SHRT_MAX, sh);
    printf("%-8s %-32s %-8zu %-24u %-24u %-15hu\n", "ush", "unsigned short", sizeof(unsigned short), 0u, USHRT_MAX, ush);
    printf("%-8s %-32s %-8zu %-24d %-24d %-15d\n", "i", "int", sizeof(int), INT_MIN, INT_MAX, i);
    printf("%-8s %-32s %-8zu %-24d %-24d %-15d\n", "si", "signed int", sizeof(signed int), INT_MIN, INT_MAX, si);
    printf("%-8s %-32s %-8zu %-24u %-24u %-15u\n", "ui", "unsigned int", sizeof(unsigned int), 0u, UINT_MAX, ui);
    printf("%-8s %-32s %-8zu %-24ld %-24ld %-15ld\n", "l", "long", sizeof(long), LONG_MIN, LONG_MAX, l);
    printf("%-8s %-32s %-8zu %-24lld %-24lld %-15lld\n", "slli", "signed long long int", sizeof(signed long long int), LLONG_MIN, LLONG_MAX, slli);
    printf("%-8s %-32s %-8zu %-24lu %-24lu %-15lu\n", "ul", "unsigned long", sizeof(unsigned long), 0ul, ULONG_MAX, ul);
    printf("%-8s %-32s %-8zu %-24llu %-24llu %-15llu\n", "ulli", "unsigned long long int", sizeof(unsigned long long int), 0ull, ULLONG_MAX, ulli);
    printf("%-8s %-32s %-8zu %-24lld %-24lld %-15lld\n", "ll", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX, ll);
    printf("%-8s %-32s %-8zu %-24llu %-24llu %-15llu\n", "ull", "unsigned long long", sizeof(unsigned long long), 0ull, ULLONG_MAX, ull);
    printf("%-8s %-32s %-8zu %-24e %-24e %-15f\n", "f", "float", sizeof(float), -FLT_MAX, FLT_MAX, f);
    printf("%-8s %-32s %-8zu %-24e %-24e %-15f\n", "d", "double", sizeof(double), -DBL_MAX, DBL_MAX, d);
    printf("%-8s %-32s %-8zu %-24Le %-24Le %-15Lf\n", "ld", "long double", sizeof(long double), -LDBL_MAX, LDBL_MAX, ld);
    printf("==============================================================================================\n");

    return 0;
}