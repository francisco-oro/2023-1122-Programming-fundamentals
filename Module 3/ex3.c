/*Serie de ejercicios para el tercer parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

3. El lenguaje Logo hizo famoso el concepto de los gráficos de tortuga. Imagine una tortuga 
mecánica que camina alrededor de una habitación bajo el control de un programa en C. La 
tortuga mantiene una pluma en una de dos posiciones: arriba o abajo. Mientras la pluma 
está abajo, la tortuga traza las formas mientras se mueve; mientras la pluma está arriba, la 
tortuga se mueve libremente sin dibujar.
Simular la operación de la tortuga, así como el tablero con un arreglo de 50 por 50 llamado 
piso, inicializado en ceros. Los comandos se ingresan uno a la vez. Se debe conocer la 
posición actual de la tortuga en todo momento, y si la pluma está arriba o abajo.

## VARIABLES DE ENTRADA 
file(archivo): Almacena el archivo para su lectura
buff(entero): Almacena cada uno de los valores enteros leídos en el archivo
## VARIABLES DE SALIDA

*/
#include <stdio.h>
#define MAXSIZE 50

void turtle(){
    printf("\033[1;32m");
}

void reset(){
    printf("\033[0m");
}

char displayCell(int cell/*, int active*/){
    // if(active) turtle();
    if(cell == 1) printf("X");
    else printf("0");
    reset(); 
    printf("  ");
}


void drawMovement(int grid[MAXSIZE][MAXSIZE], int currentPosition[2], int direction, int steps, int mode){
    // Mode 0: pen disabled. Mode 1: pen enabled. Mode 2: Current position
    int i, j;
    switch(steps){
        case 1: 
            // North
            for(i = 0; i < steps; i++){
                if((currentPosition[0] - 1) <  0) break; 
                currentPosition[0] -= 1;
                if(mode) grid[currentPosition[0]][currentPosition[1]] = 1; 
            }
            break;
        case 2:
            // East
            for(i = 0; i < steps; i++){
                if((currentPosition[1] + 1) >  49) break; 
                currentPosition[1] += 1;
                if(mode) grid[currentPosition[0]][currentPosition[1]] = 1; 
            }
            break;
        case 3:
            // South
            for(i = 0; i < steps; i++){
                if((currentPosition[0] + 1) >  49) break; 
                currentPosition[0] += 1;
                if(mode) grid[currentPosition[0]][currentPosition[1]] = 1; 
            }
            break;
        case 4:
            // West
            for(i = 0; i < steps; i++){
                if((currentPosition[1] - 1) <  0) break; 
                currentPosition[1] -= 1;
                if(mode) grid[currentPosition[0]][currentPosition[1]] = 1; 
            }
            break;
    }
    // grid[currentPosition[0]][currentPosition[1]] = 2;
    for(i = 0; i < 50; i++){
        for(j = 0; j < 50; j++){
            printf("%d", grid[i][j]); 
        }
        printf("\n");
    }
    for(i = 0; i < 2; i++){
        printf("%d \t", currentPosition);
    }

}


void displayGrid( int grid[MAXSIZE][MAXSIZE], int currentPosition[2]){
    int i, j;
    printf("    "); 
    for(i = 0; i < MAXSIZE; i++){
        if(i < 10){
            printf("%d  ", i);
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    for(i = 0; i < MAXSIZE; i++){
        printf("---");
    }
    printf("----- \n");
    for(i = 0; i < MAXSIZE; i++){
        if(i < 10) printf("%d  | ", i);
        else printf("%d | ", i);
        for(j = 0; j < MAXSIZE; j++){
            if(i == currentPosition[0] && j == currentPosition[1])
            {
                turtle();
                displayCell(grid[i][j]);
                reset();
                continue;
            }
           displayCell(grid[i][j]);
        }
        printf(" | \n");  
    }
    printf("\n");
}

int main(void) {
    int currentPosition[2] = {0, 0}, i, j, grid[MAXSIZE][MAXSIZE], mode = 0, newInput, direction = 2, steps, isOver = 0;
    FILE *file;
    file = fopen("grid.txt", "w+");
    for(i=0; i<MAXSIZE; i++){
        for(j=0; j<MAXSIZE; j++){
            grid[i][j] = 0;  
        }
    }
    // grid[currentPosition[0]][currentPosition[1]] = 2; 
    displayGrid(grid, currentPosition);
    
    while(!isOver){
        printf("->");
        scanf("%d", &newInput);
        switch(newInput){
            case 1:
                mode = 0; 
                break;
            case 2:
                mode = 1;
                break;
            case 3:
                if(direction++ > 4) direction = 1;
                break; 
            case 4:
                if(direction-- < 1) direction = 1;
                break;
            case 5:
                printf("Steps: ");
                scanf("%d", &steps);
                drawMovement(grid, currentPosition, direction, steps, mode);
                break; 
            case 6:
                displayGrid(grid, currentPosition);
                break;
            case 9:
                isOver = 1;
                for(i=0; i<steps; i++){
                    for(j=0; j<steps; j++){
                        if(mode == 1) fprintf(file, "X  "); 
                    }
                fprintf(file, "\n");
                }
                isOver = 1;
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }
    return 0;
}