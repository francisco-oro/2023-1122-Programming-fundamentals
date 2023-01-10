/*Serie de ejercicios para el tercer parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

1.Dado un archivo con valores enteros en forma de una sola columna, imprimir el gráfico 
de barras correspondiente a cada uno de los valores leídos. La ruta y nombre del archivo 
de texto a leer se dará desde la línea de comandos. 

## VARIABLES DE ENTRADA 
file(archivo): Almacena el archivo para su lectura
buff(entero): Almacena cada uno de los valores enteros leídos en el archivo
## VARIABLES DE SALIDA

*/


#include <stdio.h>

int main(void) {
    int buff, i;
    FILE *file;
    file = fopen("test1.txt", "r");
    while(fscanf(file, "%d", &buff) != EOF) {
        for(i = 0; i < buff; i++){
            printf("*");
        }
        printf("\n");
    }
    fclose(file);
    return 0;
} 