// P0 
#include <stdio.h>
#include <math.h>

#define MAXSIZE 10

void derivada(float pol[MAXSIZE], int grado, float derivada[MAXSIZE]){
    int i; // i exponentes
    for(i = grado; i > 0; i--){
        derivada[i-1] = i * pol[i];
    }
    grado -= 1;
}

float evaluar(float pol[MAXSIZE], float val, int grado){
    int i;
    float sum = 0; 
    for(i = 0; i <= grado; i++){
        sum += (pol[i] * pow(val, i)); 
    }
    return sum; 
}

int main(int argc, char **argv){
    float p, p0, tolerancia, pol[MAXSIZE], der[MAXSIZE], sum;
    int its, i = 1, grado, gradoDer, success;
    printf("Grado: ");
    scanf("%d", &grado);
    for(int i = 0; i <= grado; i++){
        printf("x^%d: ", i);
        scanf("%f", &pol[i]);
    }
    printf("Tolerancia: ");
    scanf("%f", &tolerancia); 
    printf("Aprox inicial: ");
    scanf("%f", &p0);
    i = 1; 
    derivada(pol, grado, der); 
    while(i < its){
        p = p0 - (evaluar(pol, p0, grado)/evaluar(der, p0, grado - 1));
        printf("%.2f\n", p);
        if(fabs(p - p0) < tolerancia) break;
        i++;
        p0 = p;  
    }
    if(i == its) printf("El metodo fracaso con %d iteraciones\n", i);
    printf("p = %.2f", p);
    
}