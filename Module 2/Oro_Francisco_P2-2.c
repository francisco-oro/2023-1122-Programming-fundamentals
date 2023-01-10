/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

2.-Escribir un programa que solicite un número entero N, y que para todo múltiplo X de N menor que 100, calcule el producto de todos 
los números impares menores que X. El programa deberá mostrar el valor de la suma de todos los productos calculados. 

## VARIABLES DE ENTRADA 
# n (entero): Almacena el número N

## VARIABLES DE SALIDA
# x (entero): Cada uno de los múltiplos de N menores a 100
# mult(unsigned long long int): Producto de todos los números impares menores que X
# sum(unsigned long long int): Suma de todos los productos mult obtenidos

## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-2
INICIO
    ENTERO n, x, j=1, i
    UNSIGNED LONG LONG INT mult, sum=0
    ESCRIBIR "Ingrese el valor de N: "
    LEER n
    SI n > 0 & n < 100 HACER
        x = j * n
        MIENTRAS x < 100 HACER
            mult = 1
            PARA i = 1 CON PASO 2 HASTA i < x HACER
                mult = mult * i
            FIN_PARA
            ESCRIBIR x, mult
            sum = sum + mult
            j = j + 1
            x = j * n
        FIN_MIENTRAS
        ESCRIBIR "La suma de todos los productos es", sum
    FIN_SI
    DE LO CONTRARIO HACER
        ESCRIBIR "El valor de N debe ser un número entero entre 1 y 99"
    FIN_DE LO CONTRARIO

FIN
*/ 

#include <stdio.h>
int main(){
    int n, x, j=1, i;
    unsigned long long int mult, sum = 0;
    printf("Ingrese el valor de N: ");
    scanf("%i",&n);
    if(n > 0 & n <100){
        x = j * n;
        while(x < 100){
            mult = 1;
            for(i = 1; i < x; i += 2){
                mult *= i;
            }
            printf("%i: %llu \n", x, mult);
            sum += mult; 
            j++;
            x = j * n;
        }
        printf("Suma de todos los productos: %llu", sum);
    }
    else {
        printf("El valor de N debe ser un n%cmero entero entre 1 y 99 ", 163);
    }
}