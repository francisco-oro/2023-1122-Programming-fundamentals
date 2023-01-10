/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

12. Escribir un programa que lea cinco números cualesquiera y emita un mensaje indicando si están o no 
ordenados en orden creciente.

## VARIABLES DE ENTRADA 
nums[5] (entero): Conjunto de datos proporcionado por el usuario

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
Oro_Francisco_P2-12 
Algoritmo Oro_Francisco_P2-12 
        Dimension nums[5]
        Escribir 'Ingrese 5 numeros', 163
        Para  i = 0 Hasta 5 Con Paso 1
            Escribir ': ', i + 1
            Leer nums[i]
            Si (i == 0) hacer
                prevNumber = nums[i]
            FinSi
            Si (nums[i] < prevNumber) hacer 
                isConsecutive = 0
            FinSi
            prevNumber = nums[i]
        FinPara
    Si isConsecutive hacer
        Escribir 'Los nmeros estn ordenados en forma creciente', 163, 160
    FinSi
    De lo contrario hacer
        Escribir 'Los nmeros no estn ordenados en forma creciente', 163, 160
    FinDeloContrario
FinAlgoritmo
*/ 

#include <stdio.h>
int main(void)
{
    float nums[5], prevNumber;
    int i, isConsecutive = 1; 
    printf("Ingrese 5 n%cmeros\n", 163);
    for (i = 0; i < 5; i++){
        printf("%d: ", i + 1);
        scanf("%f", &nums[i]);
        if(i == 0) prevNumber = nums[i];
        if(nums[i] < prevNumber) isConsecutive = 0;
        prevNumber = nums[i];
    }
    if(isConsecutive) printf("Los n%cmeros est%cn ordenados en forma creciente", 163, 160);
    else printf("Los n%cmeros no est%cn ordenados en forma creciente", 163, 160);
    return 0;
}