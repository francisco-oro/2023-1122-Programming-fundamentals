/*/*Serie de ejercicios para el segundo parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

16.- Escribir un programa que pidiendo un valor N seguido de N números, calcule el máximo y mínimo de
ese conjunto de N números.

## VARIABLES DE ENTRADA 
nums[MAXIZE] (entero): Numeros dados por el usuario

## VARIABLES DE SALIDA
largestNumber(entero) Numero mas grande
smallestNumber (entero) Numero mas pequeño

## PSEUDOCÓDIGO
Algoritmo Oro_Francisco_P2-16
Dimension  nums[MAXvariableReservadaZE]
Escribir 'Ingrese el total de nmeros del conjunto: ', 163
Leer n
Para i = 0 Hasta n Con Paso 1
Escribir ': ', i + 1
Escribir '', i
Leer nums[i]
Si (i == 0)
largestNumber = nums[i]
smallestNumber = nums[i]
FinSi
Si (nums[i] > largestNumber) largestNumber = nums[i]
Si (nums[i] < smallestNumber) smallestNumber = nums[i]
FinSi
FinSi
Escribir ' ', largestNumber, smallestNumber
FinAlgoritmo
Escribir 'Valor mximo del conjunto: ', 160, largestNumber
Escribir 'Valor mnimo del conjunto: ', 161, smallestNumber
FinPara

*/ 

#include <stdio.h>
#define MAXSIZE 100
int main(void)
{
	int n, nums[MAXSIZE], largestNumber, smallestNumber, i;
	printf("Ingrese el total de n%cmeros del conjunto: ", 163); 
	scanf("%d", &n);
	for(i = 0; i < n; i++){
	    printf("%d: ", i + 1);
		printf("%d\n", i);
	    scanf("%d", &nums[i]);
	    if(i == 0){
			largestNumber = nums[i];
			smallestNumber = nums[i]; 
		}
	    if(nums[i] > largestNumber) largestNumber = nums[i];
	    if(nums[i] < smallestNumber) smallestNumber = nums[i];
		printf("%d %d\n", largestNumber, smallestNumber);
	}
	printf("Valor m%cximo del conjunto: %d\n", 160, largestNumber);
	printf("Valor m%cnimo del conjunto: %d\n", 161, smallestNumber);
	return 0;
}