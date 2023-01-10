/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

8. Repetir el ejercicio anterior, pero utilizando la sentencia de control if-else.

## VARIABLES DE ENTRADA 
fixedGrade (entero): Almacena el valor entero equivalente a la nota ingresada por el usuario

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-7 
INICIO
    ENTERO fixedGrade
    ESCRIBIR "Ingrese la calificaci%cn\n", 162
    LEER fixedGrade
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
    DE LO CONTRARIO HACER 
        ESCRIBIR "No es una calificación válida"
    FIN_DE LO CONTRARIO
FIN
*/ 
#include <stdio.h>
int main(void)
{
    int fixedGrade;
    printf("Ingrese la calificaci%cn\n", 162); 
    scanf("%d", &fixedGrade);
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
    } else {
        printf("%d no es una calificaci%cn v%clida", fixedGrade, 162, 160);     
    }
    return 0;
}