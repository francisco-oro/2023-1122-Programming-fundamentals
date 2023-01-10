/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

Problema 4.-Diseñar un algoritmo y realizar su implementación que lea tres números A, B , C y visualice en pantalla el valor del más grande. 
Se supone que los tres valores son diferentes


## VARIABLES DE ENTRADA 
# nums[3] (Entero): Arreglo que almacena los tres números dados

## VARIABLES DE SALIDA
# largestNumber (Entero): Variable que almacena el número más grande 

## PSEUDOCÓDIGO

INICIO
    ENTERO nums[3], largestNumber, i
    ESCRIBIR("Ingrese 3 números difrentes: ")
    PARA i = 0 HASTA i < 3 CON PASO 1 HACER
        ESCRIBIR "Numero", [i], "= "
        LEER nums[i]
    FIN_PARA
    largestNumber = nums[0]
    PARA i = 1 HASTA i < 3 CON PASO 1 HACER
        SI nums[i] > largestNumber HACER
            largestNumber = nums[i]
        FIN_SI
    FIN_PARA
    ESCRIBIR "El número más grande es: ", largestNumber
FIN
*/ 

#include <stdio.h> 

int  main(){
    int nums[3], i, largestNumber;
    printf("Ingrese tres n%cmeros diferentes: \n", 163);
    for(i=0; i<3; i++){
        printf("n%cmero %i:  ", 163, i);
        scanf("%d", &nums[i]);
    }
    largestNumber = nums[0];
    for(i=1; i<3; i++){
        if(nums[i]>largestNumber){
            largestNumber = nums[i];
        }
    }
    printf("El n%cmero m%cs grande es: %d", 163, 160, largestNumber);
    return 0; 
}