/*
30/11/2022
Perez Osorio Luis Eduardo
Torres Chávez Juan Carlos 
Vazquez Flores Jose Ángel
Oro Estrada Francisco Abimael

Pseudocódigo:

#definir MAXSIZE 10

FUNC readMat(entero M[MAXSIZE][MAXSIZE], entero n, entero, m)
    entero i, j
    PARA i = 0 CON PASO 1 HASTA i < n HACER
        PARA j = 0 CON PASO 1 HASTA j < m HACER
            ESCRIBIR i, j, ":"
            LEER M[i][j]
        FIN_PARA
    FIN_PARA
FIN_FUN

FUNC mainDiag_Sum(entero M[MAXSIZE][MAXSIZE], entero n)  
    entero i, sum = 0
    PARA i = o HASTA i < n CON PASO 1 HACER
        sum = sum + M[i][i]
    FIN_PARA
    REGRESAR sum
FIN_FUNC

FUNC transposeMat(entero M[MAXSIZE][MAXSIZE], entero n, entero m, entero t[MAXSIZE][MAXSIZE])
    entero i, j
    PARA i = 0 HASTA i < n CON PASO 1 HACER
        PARA j = 0 HASTA j < n CON PASO 1 HACER
            t[j][i] = M[i][j]
        FIN_PARA
    FIN_PARA
FIN_FUNC

FUNC drawMat(entero M[MAXSIZE][MAXSIZE], entero n, entero m)
    entero i, j
    PARA i = 0 HASTA i < n CON PASO 1 HACER
        PARA j = 0 HASTA j < n CON PASO 1 HACER
            ESCRIBIR "\t" M[i][j]
        FIN_PARA
        ESCRIBIR("\n")
    FIN_PARA
FIN_FUNC

INICIO algoritmo Lab10&11_test3
    entero cols, rows, M[MAXSIZE][MAXSIZE], t[MAXSIZE][MAXSIZE], sum
    ESCRIBIR "Ingrese el número de filas"
    LEER rows
    ESCRIBIR "Ingrese el número de columnas"
    LEER cols
    SI rows > 10 || rows < 1 || cols < 1 || cols > 10 HACER
        ESCRIBIR "Por favor, ingrese un valor entre 1 y 10"
    FIN_SI
    DE LO CONTRARIO HACER
        readMat(M, rows, cols)
        ESCRIBIR("La matriz ingresada: ")
        drawMat(M, rows, cols)
        SI(rows == cols) HACER
            ESCRIBIR "Suma de dígitos en la diagonal principal: ", MainDiagSum(M, rows)
        FIN_SI
        DE LO CONTRARIO HACER
            ESCRIBIR "La matriz transpuesta es: "
            transposeMat(M, rows, cols, t)
            drawMat(t, cols, rows)
        FIN_DE LO CONTRARIO
    FIN_DE LO CONTRARIO
FIN
*/

#include <stdio.h>
#include <stdlib.h>

// Dimensiones máximas de la matriz: 10 x 10
#define MAXSIZE 10

// Lectura de la matriz
void readMat(int M[MAXSIZE][MAXSIZE], int n, int m){ 
    int i, j; 
    for (i=0; i < n ; i++){
        for(j = 0; j < m; j++){
            printf("[%d] [%d]:", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

// Suma de la diagonal principal (caso n = m)
int mainDiag_Sum (int M[MAXSIZE][MAXSIZE], int n){
    int i, sum = 0; 
    for(i = 0; i < n; i++){
        sum += M[i][i];    
    }
    return sum; 
}

// Transpuesta de la matriz (caso n != m)
void transposeMat(int M[MAXSIZE][MAXSIZE], int n, int m, int t[MAXSIZE][MAXSIZE]){
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++){
            t[j][i] = M[i][j];
        }
    }
}

// Mostrar la matriz en pantalla
void drawMat(int M[MAXSIZE][MAXSIZE],int n, int m){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%i\t", M[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int cols, rows, M[MAXSIZE][MAXSIZE], t[MAXSIZE][MAXSIZE];
    printf("Ingrese el n%cmero de filas (n): ", 163); 
    scanf("%i", &rows);
    printf("Ingrese el n%cmero de columnas (m): ", 163); 
    scanf("%i", &cols); 
    // Verificar que n y m estén dentro del rango permisible
    if(rows > 10 || rows < 1 || cols < 1 || cols > 10){
        printf("Por favor, seleccione como m%cximo 10 columnas y/o filas", 160);
    } else {
        // Leer la matriz y mostrarla en pantalla
        readMat(M, rows, cols);
        printf("La matriz ingresada:\n"); 
        drawMat(M, rows, cols);
        // Caso n = m
        if(rows == cols){
            printf("Suma de d%cgitos en la diagonal principal: %i", 161, mainDiag_Sum(M, rows));
        }
        // Caso n != m 
        else {
            printf("La matriz transpuesta es: \n");
            transposeMat(M, rows, cols, t);
            drawMat(t, cols, rows); 
        }
    }
    return 0;
}

