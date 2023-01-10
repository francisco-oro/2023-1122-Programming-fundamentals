/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

19.- Implementar el algoritmo para imprimir la suma de los números impares menores o iguales a N

## VARIABLES DE ENTRADA 
fixedGrade (entero): Almacena el valor entero equivalente a la nota ingresada por el usuario

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-7 

FIN
*/ 
#include <stdio.h>
int main(void)
{
    int n, sum = 0, i;
    printf("Ingrese un n%cmero entero: ", 163);
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        if(i % 2) sum += i;
    }
    printf("Suma de los n%cmeros impares menores o iguales a %d: %d", 163, n, sum);
}