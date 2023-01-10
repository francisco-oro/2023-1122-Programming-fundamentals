/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

7.- Escribir un programa que lea la calificación de un examen por teclado y devuelva la calificación no 
numérica correspondiente. La calificación podrá ser: No aprobado (0-4.99), Aprobado (5-6.99), Notable (7-
8.99), Sobresaliente (9-9.99) o Excelente (10). Realizar este ejercicio utilizando la sentencia de control
switch.

## VARIABLES DE ENTRADA 
fixedGrade (entero): Almacena el valor entero equivalente a la nota ingresada por el usuario

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-7 
INICIO
    ENTERO fixedGrade
    ESCRIBIR "Ingrese la calificaci%cn\n", 162
    LEER fixedGrade
    SEGUN fixedGrade HACER
        CASO 0 ... 4:
            ESCRIBIR "No aprobado"
            BREAK
        CASO 5 ... 6:
            ESCRIBIR "Aprobado"
            BREAK
        CASO 7 ... 8:
            ESCRIBIR "Notable"
            BREAK
        CASO 9:
            ESCRIBIR "Sobresaliente"
            BREAK
        CASO 10: 
            ESCRIBIR "Excelente"
            BREAK
        DEFECTO: 
            ESCRIBIR "No es una calificación válida"
    FIN_SEGUN
FIN
*/ 
#include <stdio.h>

int main(void)
{
    int fixedGrade;
    printf("Ingrese la calificaci%cn\n", 162); 
    scanf("%d", &fixedGrade);
    switch (fixedGrade){
        case 0 ... 4:
            printf("No aprobado\n");
            break;
        case 5 ... 6:
            printf("Aprobado\n");
            break;
        case 7 ... 8:
            printf("Notable\n");
            break;
        case 9:
            printf("Sobresaliente\n");
            break;
        case 10:
            printf("Excelente\n");
            break;
        default:
            printf("%d no es una calificaci%cn v%clida", fixedGrade, 162, 160);     
    }
    return 0;
}