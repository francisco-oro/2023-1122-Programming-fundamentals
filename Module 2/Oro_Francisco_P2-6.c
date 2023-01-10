/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

6. Diseñar un programa que permita realizar diferentes tipos de conversiones de monedas. 
El usuario debe seleccionar un tipo de conversión desde el menú principal.
Por ejemplo:
1. Dólares a pesos
2. Pesos a dólares
3. Pesos a euros
4. Euros a pesos
5. Dólares a euros
6. Euros a dólares

## VARIABLES DE ENTRADA 
# choice (entero): Almacena el número de la conversión que desea realizar el usuario
# inC (real): Almacena la cantidad de la divisa inicial

## VARIABLES DE SALIDA
# outC (real): Almacena la cantidad convertida a la divisa especificada  

## PSEUDOCÓDIGO
ALGORITMO_Oro_Francisco_P2-6
INICIO
    ENTERO choice
    REAL inC, outC
    ESCRIBIR "Opciones:\n 1. D%clares a pesos\n2. Pesos a d%clares\n3. Pesos a euros\n4. Euros a pesos\n5. D%clares a euros\n6. Euros a d%clares\n", 162, 162, 162, 162
    ESCRIBIR "Ingrese la convers%cn a realizar: ", 162
    LEER choice
    ESCRIBIR "Ingrese la cantidad inicial: "
    LEER inC
    SEGUN choice HACER
        CASO 1:
            outC = inC * 1.967
            BREAK
        CASO 2: 
            outC = inC * 19.67 ** (-1)
            BREAK
        CASO 3: 
            outC = inC * 20.67 ** (-1)
            BREAK
        CASO 4: 
            outC = inC * 20.67
            BREAK 
        CASO 5: 
            outC = inC * 1.05 ** (-1)
            BREAK
        CASO 6: 
            outC = inC * 1.05
        DEFECTO:
            ESCRIBIR "Entrada no v%clida", 160
    FIN_SEGUN
    ESCRIBIR "Cantidad finaL: " outC
FIN
*/ 
#include <stdio.h>
#include <math.h>
int main(void)
{
	int choice;
	float inC, outC;
	printf("Opciones:\n 1. D%clares a pesos\n2. Pesos a d%clares\n3. Pesos a euros\n4. Euros a pesos\n5. D%clares a euros\n6. Euros a d%clares\n", 162, 162, 162, 162);
	printf("Ingrese la convers%cn a realizar: ", 162);
	scanf("%i", &choice);
	printf("Ingrese la cantidad inicial: ");
	scanf("%f", &inC);
	switch(choice){
	    case 1:
	        outC = inC * 19.67;
	        break;
        case 2:
	        outC = inC * pow(19.67, -1);
	        break;
        case 3:
            outC = inC * pow(20.67, -1);
            break;
        case 4:
            outC = inC * 20.67;
            break;
        case 5:
            outC = inC  * pow(1.05, -1);
            break;
        case 6:
            outC = inC * 1.05;
            break;
        default:
            printf("Entrada no v%clida", 160);
	}
	printf("Cantidad final: %.2f", outC);
}