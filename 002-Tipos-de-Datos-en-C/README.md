# Programa 002 - Tipos de Datos Fundamentales en C

## Descripción

Este programa presenta los tipos de datos fundamentales del lenguaje C mediante una tabla organizada que muestra el nombre de la variable, el tipo de dato, su tamaño en memoria (`sizeof`), los valores mínimo y máximo definidos por la implementación y el valor inicial asignado a cada variable.

El programa está pensado como una herramienta de consulta y aprendizaje para quienes comienzan a estudiar el lenguaje C.

---

## Objetivos

- Conocer los tipos de datos fundamentales del lenguaje C.
- Comprender las diferencias entre tipos con signo (`signed`) y sin signo (`unsigned`).
- Aprender a utilizar el operador `sizeof`.
- Conocer las constantes definidas en las bibliotecas `limits.h` y `float.h`.
- Practicar el uso de `printf()` y los especificadores de formato correspondientes a cada tipo.

---

## Conceptos estudiados

- `char`
- `signed char`
- `unsigned char`
- `short`
- `signed short`
- `unsigned short`
- `int`
- `signed int`
- `unsigned int`
- `long`
- `signed long long int`
- `unsigned long`
- `unsigned long long int`
- `long long`
- `unsigned long long`
- `float`
- `double`
- `long double`
- Operador `sizeof`
- Bibliotecas `limits.h`
- Biblioteca `float.h`
- Función `printf()`

---

## Bibliotecas utilizadas

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>
```

---

## Compilación

```bash
gcc -Wall -Wextra -pedantic -std=c17 -o main main.c
```

---

## Ejecución

```bash
./main
```

---

## Ejemplo de salida

El programa genera una tabla similar a la siguiente:

```text
==============================================================================================
                         TIPOS DE DATOS FUNDAMENTALES DE C
==============================================================================================
Variable Tipo                             Bytes    Valor mínimo            Valor máximo
...
```

Los tamaños y los rangos pueden variar según la arquitectura y el compilador utilizados.

---

## Lo aprendido

Con este programa se practican conceptos fundamentales del lenguaje C relacionados con la representación de datos en memoria, el uso de bibliotecas estándar y la generación de salidas formateadas mediante `printf()`.

Este programa constituye la base para comprender cómo almacena información un programa escrito en C y servirá como referencia en proyectos posteriores.

---

## Compilador recomendado

GCC utilizando el estándar C17.

---

## Autor

**Reinel Hernandez**

Proyecto personal de aprendizaje del lenguaje C.
