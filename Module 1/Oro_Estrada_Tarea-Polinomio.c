#include <stdio.h>
#include <math.h>
// Elaborado por Francisco Abimael Oro Estrada
/* 
Nota: Ingrese los coeficientes del polinomio en orden de derecha a izquierda. Para un polinomio de grado 2: ax^2 + bx + c,
ingrese los coeficientes en el siguiente orden: c, b, a
*/
int main(){
    int n, i;
    float pol[n+1], x, sum=0;
    printf("Ingrese el grado del polinomio: \n");
    scanf("%i",&n);
    printf("Introduzca un valor x a valuar en dicho polinomio: \n");
    scanf("%f",&x);
    printf("Introduzca los coeficientes de cada t%cmino: \n", 130);
    for(i=0; i<=n; i++){
        printf("x^%i: \n",i);
        scanf("%f",&pol[i]);
        sum += pol[i] * pow(x, i);        
    }
    printf("f(%f) = %f\n", x, sum);
}