/*Serie de ejercicios para el tercer parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

2. Dado un archivo que contiene 100 valores, hacer un programa que calcule la media, 
mediana y moda de ese conjunto de valores mediante el uso de funciones. Cada una de las 
medidas estadísticas mencionadas deberán estar en un archivo por separado y deberán ser 
llamadas en el código principal (función main). El archivo principal se deberá llamar 
medidas.c y se le deberá pasar por argumentos de la línea de comandos el nombre del 
archivo de texto que contiene los datos.
La media es el promedio aritmético de todos los valores. La mediana es el valor medio del 
conjunto ordenado de valores. Si hay un número par de elementos en el centro, la mediana 
se calcula como el promedio de los dos elementos centrales.
La moda es el valor más frecuente entre todas las frecuencias. Se determina contando el 
número de respuestas de cada tipo y posteriormente seleccionando el valor con más 
ocurrencias. 33 * 30
Imprimir los valores leídos del archivo, los valores ordenados, el valor de la media, mediana 
y moda y un histograma para la moda. (Programa 1)

## VARIABLES DE ENTRADA 
file(archivo): Almacena el archivo para su lectura
## VARIABLES DE SALIDA
Moda (real): Valor de la moda
Mediana (real): Valor de la mediana
Media (real): Valor de la media
*/

#include <stdio.h>
#include "mean.h"
#include "median.h"
#include "mode.h"

#define MAXSIZE 100 

int main(void) {
    FILE *file;
    float _median;
    int arr[MAXSIZE], size = sizeof(arr)/sizeof(arr[0]),  i = 0;
    file = fopen("test2.txt", "r+");
    
    while(fscanf(file, "%d", &arr[i]) != EOF) i++;
    
    // for(i = 0; i < MAXSIZE; i++) printf("%d", i);
    printf("Media: %.2f\n", mean(arr, size));
    _median = (median(arr, size) / 2.0);
    printf("Mediana: %.2f\n", _median);
    printf("Moda: %d\n", mode(arr, size));
    fclose(file);
    return 0; 
}