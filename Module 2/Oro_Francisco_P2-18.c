/*18.- Los empleados de una fábrica trabajan en dos turnos: diurno y nocturno. Se desea calcular el pago 
diario de acuerdo con los siguientes puntos:
1. la tarifa de las horas diurnas es de $5,
2. la tarifa de las horas nocturnas es de $8,
3. caso de ser domingo, la tarifa se incrementará en $2 el turno diurno y $3 el turno nocturno.*/

#include <stdio.h>
int main(void)
{
	int dhours[2] = {0, 0}, nhours[2] = {0, 0}, total = 0, i, addS; 
	printf("Horas diurnas trabajadas: ");
	scanf("%d", &dhours[0]);
	printf("Horas nocturnas trabajadas: ");
	scanf("%d", &nhours[0]);
	printf("¿Agregar horas trabajadas durante el domnigo? \t 1 - S%c \t 0 - No\n", 161);
	scanf("%d", &addS);
	if(addS){
	    printf("Horas diurnas trabajadas en domingo: ");
	    scanf("%d", &dhours[1]);
	    printf("Horas nocturnas trabajadas en domingo: ");
	    scanf("%d", &nhours[1]);  
	}
	total = (dhours[0] * 5 + nhours[0] * 8 + dhours[1] * 7 + nhours[1] * 11);
	printf("Sueldo = %i", total);
}