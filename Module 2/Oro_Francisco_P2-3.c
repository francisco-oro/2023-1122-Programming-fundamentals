/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

Problema 3.-Escribir un programa que calcule la función trigonométrica seno en un punto mediante la expresión de un desarrollo en serie de esta. 
El valor de x se pedirá al usuario, pero sólo se aceptarán valores comprendidos entre 0 y 20 radianes, considerándose erróneos otros valores. Se considerará 
que valor obtenido es correcto cuando el último sumando de la serie anterior sea menor que un error residual máximo (solicitado al usuario). El programa debe mostrar:
•  El valor de sen(x) obtenido utilizando la siguiente instrucción en C:sin(x);
•  El valor de sen(x) calculado haciendo uso del desarrollo en serie anterior.
•  El número de iteraciones realizadas para obtener el último valor

## VARIABLES DE ENTRADA 
# x (real): Valor x a evaluar en sen(x), con 0 <= x <= 20
# maxError (real): Error residual máximo

## VARIABLES DE SALIDA
# sin_x (real): La función evaluada en x
# i (entero): Total de iteraciones desarolladas en la serie (debe incrementarse en una unidad)

## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-3
FUNCION  fact(entero n)
    SI  n >= 1 HACER
        DEVOLVER n * fact(n -1)
    FIN_SI
    DE LO CONTRARIO HACER
        DEVOLVER 1
    FIN_DE LO CONTRARIO 
FIN_FUNCION 

INICIO
    ENTERO i = 0, n = 1
    REAL x, maxError
    DOBLE sin_x = 0
    ESCRIBIR "Ingrese el valor de x (en grados): "
    LEER x
    x = x * (3.1459 / 180.0)
    SI (x >= 0) &  (x <= 20) HACER
        ESCRIBIR "Ingrese el error residual máximo"
        LEER maxError
        HACER
            sin_x = sin_x + (-1 ** i) * (x ** n) / fact(n)
            i = i + 1
            n = n + 2
        MIENTRAS maxError <= valorAbsoluto(sin(x) - sin_x)
        ESCRIBIR "Suma de la serie hasta", i + 1, "términos", sin_x
        ESCRIBIR "Sin(", x * (180.0/3.1459), ") usando la biblioteca math.h: ", sin(x)
    FIN_SI
    DE LO CONTRARIO HACER
         ESCRIBIR "Por favor, ingrese un valor entre 0 y 20 radianes"
    FIN_DE LO CONTRARIO
FIN
*/ 

#include <stdio.h>
#include <math.h>

int fact(int n){
    if(n >= 1){
        return n*fact(n-1);
    } else {
        return 1;
    }
}

int  main(){
    int i = 0,  n = 1; 
    float x, maxError;
    double sin_x = 0;
    printf("Ingrese el valor de x (en grados): ");
    scanf("%f", &x);
    // Convirtiendo grados a radianes 
    x = x * (3.1459 / 180.0);
    if((x >= 0) & (x <= 20)){
        printf("Ingrese el error residual m%cximo: ", 160);
        scanf("%f", &maxError);
        do {
            sin_x += (pow(-1, i) * (pow(x, n)) / fact(n));
            i++; 
            n += 2;
        } while (maxError <= fabs(sin(x) - sin_x));
        printf("\nSuma de la serie hasta %i t%crminos: %lf \n", (i + 1), 130, sin_x);
        printf("Sin(%.2f) usando la biblioteca math.h: %f \n", (x*180.0/3.1459), sin(x));
    } else {
        printf("Por favor, ingrese un valor entre 0 y 20 radianes");
    }
}