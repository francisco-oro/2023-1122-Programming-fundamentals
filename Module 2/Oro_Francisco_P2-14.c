/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

14.- Escribir un programa que diga si un número es primo o no.

## VARIABLES DE ENTRADA 
n (entero): Número natural

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
Algoritmo Oro_Francisco_P2-14

    Escribir 'Ingrese un numero: ', 163
    Leer n
    Para  i = 2 Hasta n/ Con Paso 1
        Si  (!(n % i))
            isPrime = 0
        FinSi
    FinPara
    Si isPrime Escribir 'El numero  es primo', 163, n 
    FinSi
    De lo contrario Escribir 'El numero  no es primo', 163, n
    FinDeloContrario
FinAlgoritmo
FIN
*/ 
#include <stdio.h>
int main(void)
{
    int n, i, isPrime = 1;
    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++){
        if (!(n % i)){
            isPrime = 0;
            break;
        }
    }
    if(isPrime) printf("El n%cmero %d es primo", 163, n);
    else printf("El n%cmero %d no es primo", 163, n);
    return 0;
}