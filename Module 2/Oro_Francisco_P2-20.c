/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

20.- Una persona invierte $1000.00 en una cuenta de ahorro con un 5% de interés. Se asume que todo 
el interés se deja en depósito de la cuenta; calcule y despliegue el monto acumulado de la cuenta al 
final de cada año, durante 10 años. Utilice la siguiente fórmula para determinar estos montos:
donde:
p es el monto de la inversión original (inversión principal)
r tasa de interés anual 
n número de años
a es el monto del depósito al final del año n

## VARIABLES DE ENTRADA 
fixedGrade (entero): Almacena el valor entero equivalente a la nota ingresada por el usuario

## VARIABLES DE SALIDA


## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-7 

FIN
*/ 
#include <stdio.h>
#include <math.h>
int main(void)
{
    float p = 1000.0, r = 0.05, a;
    int n = 10, i;
    for(i = 1; i <= n; i++){
        a = (p * pow(1 + r, i));
        printf("Monto del dep%csito al final del a%co %d: %.3f\n", 162, 164, i, a); 
    }
    return 0;
}