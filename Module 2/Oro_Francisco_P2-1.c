/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

Problema 1: Escribir un programa que muestre por pantalla un cuadrado de dígitos(del 0 al 9) para un valor de n solicitado al usuario. 
Si se ingresa un número de dos dígitos, indicar al usuario los valores que se aceptan. 

## VARIABLES DE ENTRADA 
# n (entero): Almacena el número N para dibujar la matriz de números de 1 a N

## VARIABLES DE SALIDA
# j (entero): Variable que itera sobre cada fila de la matriz de N x N para imprimir en pantalla cada uno de sus elementos

## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-1
INICIO
    ENTERO i, n, j;
    MIENTRAS (1) HACER
        IMPRIMIR "Ingrese un valor para n: "
        LEER n
        SI (n > 0 & n < 9) HACER
            PARA i = 1 HASTA i <= n CON PASO 1 HACER
                PARA j = 1 HASTA j <= n CON PASO 1 HACER
                    IMPRIMIR j
                FIN_PARA
            IMPRIMIR /n
            FIN_PARA
        BREAK
        FIN_SI
        DE LO CONTRARIO 
            IMPRIMIR "El valor de n debe estar en el rango [1,9]"
        FIN_DE LO CONTRARIO 
FIN
*/ 

#include <stdio.h>
int main(){
    int i, n, j;
    while(1){
        printf("Ingrese un valor de n: "); 
        scanf("%i",&n);
        if(n > 0 && n < 10){
            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                    printf("%i: %", j);
                }
                printf("\n");
            }
        break;
        }
        else { 
            printf("El valor de n debe estar en el rango de [1,9]");
        }
    }
}