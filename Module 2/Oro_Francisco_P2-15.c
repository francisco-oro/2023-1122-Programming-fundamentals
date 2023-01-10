/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

15.- Leer 10 valores desde teclado y mostrar la media de los pares y la media de los impares. Hacer tres 
versiones, con un bucle: for, while y do-while. Repetir el ejercicio considerando que el número de valores se 
le solicita al usuario.

## VARIABLES DE ENTRADA 
arr[10] (entero): 10 números enteros proporcionados por el usuario

## VARIABLES DE SALIDA
evenMean(real): promedio de los números pares
oddMean (real): promedio de los números impares

## PSEUDOCÓDIGO
// Usando for
SubProceso O_E_MEAN_FOR( ARR[10])
    Para i=0 Hasta 10 Con Paso 1
        Si (arr[i] % 2)
            oddSum += arr[i]
            oddN=oddN+1
        SiNo
            evenSum += arr[i]
            evenN=evenN+1
        FinSi
    FinPara
    evenMean = evenSum / evenN
    oddMean = oddSum / oddN
    Escribir 'Media de los nmeros pares:  Media de los nmeros impares:  ', 163,  evenMean, 163, oddMean
FinSubProceso

// Usando while
SubProceso O_E_MEAN_WHILE( ARR[10])
    Mientras  i < 10
        Si (arr[i] % 2)
            oddSum += arr[i]
            oddN=oddN+1
        SiNo
            evenSum += arr[i]
            evenN=evenN+1
        FinSi
        i=i+1
    FinMientras
    evenMean = evenSum / evenN
    oddMean = oddSum / oddN
    Escribir 'Media de los nmeros pares:  Media de los nmeros impares:  ', 163,  evenMean, 163, oddMean
FinSubProceso

// Usando do While
SubProceso O_E_MEAN_DOWHILE( ARR[])
    Hacer
        Si (arr[i] % 2)
            oddSum += arr[i]
            oddN=oddN+1
        SiNo
            evenSum += arr[i]
            evenN=evenN+1
        FinSi
        i=i+1
    Hasta Que (i <= 9)
    evenMean = evenSum / evenN
    oddMean = oddSum / oddN
    Escribir 'Media de los nmeros pares:  Media de los nmeros impares:  ', 163,  evenMean, 163, oddMean
FinSubProceso

Algoritmo Oro_Francisco_P2-15
    Dimension nums[10]
    Escribir 'Ingrese 10 nmeros enteros: ', 163
    Para i = 0 Hasta 10 Con Paso 1
        Escribir ': ', i + 1
        Leer nums[i]
    FinPara
    Escribir 'Usando el for'
    o_e_mean_fornums
    Escribir 'Usando el while'
    o_e_mean_whilenums
    Escribir 'Usando el do while '
    o_e_mean_doWhilenums
FinAlgoritmo
*/ 

#include <stdio.h>

// Usando for
void o_e_mean_for(int arr[10]){
    int i, oddN = 0, evenN = 0, oddSum = 0, evenSum = 0;
    float  evenMean, oddMean;
    for(i=0; i < 10; i++){
        if(arr[i] % 2){
            oddSum += arr[i];
            oddN++;
        }
        else{
            evenSum += arr[i];
            evenN++;
        }
    
    }
    evenMean = (evenSum / evenN);
    oddMean = (oddSum / oddN);
    printf("Media de los n%cmeros pares: %f \nMedia de los n%cmeros impares: %f \n", 163,  evenMean, 163, oddMean);
}

// Usando while
void o_e_mean_while(int arr[10]){
    int i = 0, oddN = 0, evenN = 0, oddSum = 0, evenSum = 0;
    float  evenMean, oddMean;
    while (i < 10)
    {
        if(arr[i] % 2){
            oddSum += arr[i];
            oddN++;
        }
        else{
            evenSum += arr[i];
            evenN++;
        }
        i++;
    }
    evenMean = (evenSum / evenN);
    oddMean = (oddSum / oddN);
    printf("Media de los n%cmeros pares: %f \nMedia de los n%cmeros impares: %f \n", 163,  evenMean, 163, oddMean);
}

// Usando do While
void o_e_mean_doWhile(int arr[]){
    int i = 0, n = sizeof(arr) / sizeof(arr[0]), oddN = 0, evenN = 0, oddSum = 0, evenSum = 0;
    float  evenMean, oddMean;
    do
    {
        if(arr[i] % 2){
            oddSum += arr[i];
            oddN++;
        }
        else{
            evenSum += arr[i];
            evenN++;
        }
        i++;
    } while(i <= 9);
    evenMean = (evenSum / evenN);
    oddMean = (oddSum / oddN);
    printf("Media de los n%cmeros pares: %f \nMedia de los n%cmeros impares: %f \n", 163,  evenMean, 163, oddMean);
}


int main(void)
{
    int nums[10], i; 
    printf("Ingrese 10 n%cmeros enteros: \n", 163); 
    for(i = 0; i < 10; i++){
        printf("%i: ", i + 1); 
        scanf("%d", &nums[i]);
    }
    printf("Usando el for\n");
    o_e_mean_for(nums);
    printf("Usando el while\n");
    o_e_mean_while(nums);
    printf("Usando el do while \n");
    o_e_mean_doWhile(nums);    
    return 0;
}