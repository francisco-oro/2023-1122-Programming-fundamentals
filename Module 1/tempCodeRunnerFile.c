#include <stdio.h>
#include <math.h>

int main()
{
    int GradoPx, i;
    float x, Resultado, ResultadoFinal, TerminoI;
    double Coeficiente[9]={0,0,0,0,0,0,0,0,0}, Grado[9]={1,2,3,4,5,6,7,8,9};
    printf("Introduzca el grado del polinomio a evaluar.\n");
    scanf("%i", &GradoPx);
    printf("Introduzca el valor de x.\n");
    scanf("%f", &x);
    
    Resultado = 0;
    if(GradoPx<=9&&GradoPx>=0){
        if (GradoPx == 0){
            printf("Introduzca el valor del término independiente.\n");
            scanf("%f", &TerminoI);
            printf("El polinomio valuado en x es igual a: %f", TerminoI);
        }
        else{
            printf("Introduzca el valor del término independiente.\n");
            scanf("%f", &TerminoI);
            for(i=0;i<=GradoPx - 1;i++){
                printf("Introduzca el coeficiente del valor de x elevado al grado %i\n", ((i + 1)));
                scanf("%lf", &Coeficiente[i]);
                Resultado = (Resultado + ((pow(x,Grado[i]))*Coeficiente[i]));
            }
            ResultadoFinal = (Resultado + TerminoI);
            printf("El polinomio p(x) = ");
            for(i=GradoPx - 1;i>=0;i--){
                printf("+ (%.2fx^%lf)", Coeficiente[i], Grado[i]);
            }
            printf(" + (%f) valuado en %f es igual a %f", TerminoI, x, ResultadoFinal);
        }
    }
    else if (GradoPx>9){
        printf("Este valor supera al grado maximo.");
    }
    else{
        printf("Este valor no es valido.");
    }

    return 0;
}