/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

11. Escribir un programa que lea cuatro números enteros y determine cuál es el menor. También debe 
considerar el caso en el que los números sean iguales.

## VARIABLES DE ENTRADA 
nums[4] (real): Arreglo con los números ingresados por el usuairo

## VARIABLES DE SALIDA
smallestNumber (real): Valor más pequeño del conjunto de números proporcionados por el usuario

## PSEUDOCÓDIGO

SubProceso VALUEINARRAY( VAL,  ARR[],  EXCEPTION)
    Para i = 0 Hasta ((variable Reservada sizeofarr)/variable Reservada sizeof(arr[0])) Con Paso 1
        Si  (exception == i) continue
        FinSi
        Si (arr[i] == val) return 1
        FinSi
    FinPara
Algoritmo Oro_Francisco_P2-10
Inicio
    entero i
    real nums = {0, 0, 0, 0}, smallestNumber
    Escribir 'Ingrese cuatro números diferentes:', 163
    Para i=0 Hasta 4 Con Paso 1
        Escribir ': ', i + 1
        Leer nums[i]
        Si (i == 0)
            smallestNumber = nums[i]
        FinSi
        Si (valueinarray(nums[i] nums i))
            Escribir 'El número  ya se ha ingresado previamente', 163, nums[i]
            i=i-1
        FinSi
        Si (nums[i] < smallestNumber)
            smallestNumber = nums[i]
        FinSi
    FinPara
Escribir 'El número ms chico es: ', 163, 160, smallestNumber
FinAlgoritmo
*/ 

#include <stdio.h>

int valueinarray(float val, float arr[], int exception)
{
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (exception == i) continue;
        if(arr[i] == val) return 1;
    }
    return 0;
}

int main(void)
{
    int i;
    float nums[4] = {0, 0, 0, 0}, smallestNumber;
    printf("Ingrese cuatro n%cmeros diferentes:\n", 163);
    for(i=0; i < 4; i++){
        printf("%i: ", i + 1);
        scanf("%f", &nums[i]); 
        if(i == 0){
            smallestNumber = nums[i];
        }
        if(valueinarray(nums[i], nums, i)){
            printf("El n%cmero %f ya se ha ingresado previamente\n", 163, nums[i]);
            --i; 
        }
        if(nums[i] < smallestNumber){
            smallestNumber = nums[i];
        }
    }
    printf("El n%cmero m%cs chico es: %.2f", 163, 160, smallestNumber);
    return 0;
}