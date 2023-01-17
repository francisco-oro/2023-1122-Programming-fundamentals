/*Serie de ejercicios para el tercer parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

4. Un entero primo es cualquier entero divisible sólo por sí mismo y por el número 1. El 
método del cedazo de Eratóstenes se utiliza para localizar números primos. Éste funciona 
de la siguiente manera:
1) Crea un arreglo con todos los elementos inicializados en 1 (verdadero). Los elementos del 
arreglo con subíndices primos permanecerán como 1. Los demás elementos, en algún 
momento se establecerán en cero.
2) Comienza con un subíndice 2, cada vez que se encuentra un elemento del arreglo cuyo 
valor es 1, repite a lo largo del resto del arreglo y establece en cero cada elemento cuyo 
subíndice sea múltiplo del subíndice para el elemento con valor de 1. Para un subíndice 2 del 
arreglo, todos los elementos que pasen de 2 y que sean múltiplos de 2, se establecerán en 
cero (subíndices 4, 6, 8, 10, etcétera); para un subíndice de 3, todos los elementos que pasen 
de 3 y que sean múltiplos de 3, se establecerán en cero (subíndices 6, 9, 12, 15, etcétera).
Cuando este proceso termina, los elementos del arreglo que aún permanecen en 1, indican 
que el subíndice es un número primo. Estos subíndices pueden entonces desplegarse. 
Escriba un programa que utilice un arreglo de 1000 elementos para determinar e imprimir 
en un archivo de texto desplegar los números primos entre el 2 y el 999. Ignore el elemento 
0 del arreglo.

## VARIABLES DE ENTRADA 

## VARIABLES DE SALIDA
file(archivo): Almacena los números primos obtenidos
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){

    int numbers[1000], i, j;
    FILE *file;

    file = fopen("primeNumbers.txt", "w+");
    for(i = 0; i < 1000; i++) {
        numbers[i] = 1;
    }

    for (i = 2; i < 1000; i++) {
        if (numbers[i]) {
            for (j = i*2; j < 1000; j += i) {
                numbers[j] = 0;
            }
        }
    }

    for (i = 2; i < 1000; i++) {
        if (numbers[i]) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    return 0;
}