/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

5.-Hacer un algoritmo al que le damos la hora HH, MM, SS y nos calcule la hora dentrode un segundo. 
Leeremos las horas minutos y segundos como números enteros. Implementar el algoritmo en lenguaje C


## VARIABLES DE ENTRADA 
# inHour[3] (Cadena de caracteres): Arreglo que almacena la hora dada por el usuario. 

## VARIABLES DE SALIDA
# outHour[3] (entero): Arreglo que almacena la hora dentro de un segundo. 

## PSEUDOCÓDIGO

INICIO
    ENTERO outHour[3], i = 0, success = 1
    CARACTER inHour[8], *token
    ESCRIBIR "Ingrese la hora(HH:MM:SS)"
    LEER inHour
    token = srtok(inHour, ":")
    MIENTRAS(token != NULO) HACER 
        outHour[i] = atoi(token)
        SI (i==0) & (outHour[i] > 23) HACER
            ESCRIBIR "Hora no válida"
            success = 0
            BREAK
        FIN_SI
        Si (i > 0-) & (outHour[i] < 0 || outHour[i] > 23) HACER
            ESCRIBIR "Hora no válida"
            success = 0
            BREAK
        FIN_SI
        token = strtok(NULO, ":")
        i = i + 1
    FIN_MIENTRAS
    SI success HACER
        outHour[2] = outHour[2] + 1
        PARA i = 2 HASTA i >= 0 CON PASO -1 HACER
            SI outHour[i]  > 59 HACER
                outHour[i - 1] = outHour[i - 1] + 1
                outHour[i] = 0
            FIN_SI
        FIN_PARA
        SI outHour[0] > 23 HACER
            outHour[0] = 0
        FIN_SI
        ESCRIBIR "La hora adelantada en un segundo es: "
        PARA i = 0 HASTA i < 3 CON PASO 1 HACER
            SI outHour[1] < 10 HACER
                ESCRIBIR "0"outHour[i]
            FIN_SI
            DE LO CONTRARIO HACER
                ESCRIBIR outHour[i]
            FIN_DE LO CONTRARIO
            SI i < 2 HACER
                ESCRIBIR ":"
            FIN_SI
        FIN_PARA
    FIN_SI
FIN

*/

#include <string.h>
#include <stdio.h> 
#include <stdlib.h>

int  main(){
    int outHour[3], i = 0, success = 1;
    char inHour[8], * token;
    // Leyendo la hora y verificando que sea válida
    printf("Ingrese la hora (HH:MM:SS): ");
    scanf("%s", inHour);
    token = strtok(inHour, ":");
    while(token != NULL){
        outHour[i] = atoi(token);
        if((i==0) & outHour[i] > 23){
            printf("Hora no v%clida\n", 160);
            success = 0; 
            break;
        }
        if((i > 0) & (outHour[i] > 59 || outHour[i] < 0)){
            printf("Hora no v%clida\n", 160);
            success = 0; 
            break;
        }
        token = strtok(NULL, ":");
        i++;
        }
    // Adelantando un segundo a la hora dada
    if(success){
        outHour[2]++;
        for(i = 2; i >= 0; i--){
            if(outHour[i] > 59){
                outHour[i-1] += 1;
                outHour[i] = 0;
            }
        }
        if(outHour[0] > 23){
        outHour[0] = 0;
        }
        // Imprimiendo la hora final
        printf("La hora adelantada en un segundo es: ");
        for(i = 0; i < 3; i++){
            if(outHour[i] < 10){
                printf("0%d", outHour[i]);
            }else{
                printf("%d", outHour[i]);
            }
            if(i < 2){
                printf(":");
            }
    }
    }
    return 0; 
} 