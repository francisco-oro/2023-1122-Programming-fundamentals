/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

13.- Escribir un programa que lea números enteros de teclado hasta que encuentre uno que cumpla las 
siguientes condiciones:
• Múltiplo de 2.
• No múltiplo de 5.
• Mayor que 100.
• Menor que 10.000.

## VARIABLES DE ENTRADA 
n(entero): Número ingresado por el usuario
## VARIABLES DE SALIDA
n(entero): Número que cumple con las condiciones del problema

## PSEUDOCÓDIGO
Algoritmo Oro_Francisco_P2-13
    entero n
    Mientras 1
        Escribir 'Ingrese un numero: ', 163
        Leer n
        Si (!(n % 2) & (n % 5) & (n > 100) & (n < 10000))
        FinSi
    FinMientras
    Escribir 'El numero  cumple con las condiciones del problema', 163, n
FinAlgoritmo
*/ 
#include <stdio.h>
int main(void)
{
    int n;
    while(1){
        printf("Ingrese un n%cmero: ", 163);
        scanf("%d", &n);
        if(!(n % 2) && (n % 5) && (n > 100) && (n < 10000)) break;
    }
    printf("El n%cmero %d cumple con las condiciones del problema\n", 163, n);
    return 0;
}