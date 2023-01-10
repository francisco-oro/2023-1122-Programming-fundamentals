/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

9. Mejorar el ejercicio anterior de modo que si el usuario introduce un valor menor que cero o un valor 
mayor que 10 se muestre por pantalla un mensaje de error.

## VARIABLES DE ENTRADA 
fixedGrade (entero): Almacena el valor entero equivalente a la nota ingresada por el usuario

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-7 
INICIO
    ENTERO fixedGrade,isOver = 0
    ESCRIBIR "Ingrese la calificaci%cn\n", 162
    LEER fixedGrade
    SI fixedGrade < 0 || fixedGrade > 10 HACER
        ESCRIBIR "No es una calificación válida"
        isOver = 1 
    SI !isOver HACER
        SI fixedGrade == 10 HACER
            ESCRIBIR "Excelente"
        FIN_SI
        OTRO CASO SI fixedGrade > 9 HACER
            ESCRIBIR "Sobresaliente"
        FIN_OTRO CASO
        OTRO CASO SI fixedGrade > 6 HACER
            ESCRIBIR "Notable"
        FIN_OTRO CASO
        OTRO CASO SI fixedGrade > 4 HACER
            ESCRIBIR "Aprobado"
        FIN_OTRO CASO
        OTRO CASO SI fixedGrade >= 0 HACER
            ESCRIBIR "No aprobado"
        FIN_OTRO CASO
    FIN_SI
FIN
*/ 
#include <stdio.h>
int main(void)
{
    int fixedGrade, isOver = 0;
    printf("Ingrese la calificaci%cn\n", 162); 
    scanf("%d", &fixedGrade);
    if(fixedGrade < 0 || fixedGrade > 10){
        printf("%d no es una calificaci%cn v%clida", fixedGrade, 162, 160);     
        isOver = 1;
    }
    if(!isOver){
        if(fixedGrade == 10){
            printf("Excelente\n");
        } else if (fixedGrade > 9) {
            printf("Sobresaliente\n");
        } else if (fixedGrade > 6){
            printf("Notable\n");
        } else if (fixedGrade > 4){
            printf("Aprobado\n");
        } else if (fixedGrade >= 0){
            printf("No aprobado\n"); 
    }
    return 0;
    }
}