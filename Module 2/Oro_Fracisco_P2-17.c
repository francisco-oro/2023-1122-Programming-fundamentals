/*17.- Calcula la media de las notas de un conjunto de alumnos. La introducción de datos finaliza cuando el
valor de la nota es –1.*/

#include<stdio.h>
int main(void)
{
    int n = 0;
    float sum=0, mean, newGrade;
    printf("Ingrese la nota %d (-1 para finalizar): ", n + 1);
    scanf("%f", &newGrade);
    sum += newGrade;
    while(newGrade != -1){
           n++;
           printf("Ingrese la nota %d (-1 para finalizar): ", n + 1);
        scanf("%f", &newGrade);
        sum += newGrade;
    }
    mean = sum / n;
    printf("El promedio de las notas es: %.2f ", mean);
}