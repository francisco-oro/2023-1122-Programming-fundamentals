#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *primo;
    int arreglo[1000], i, j;
    float multi;
    printf("Bienvenido.\n");

    primo=fopen("Primos.txt", "w");
    if(primo==NULL)
    {
        printf("No se ha podido crear el archivo.\n");
        exit(1);
    }
    for(i=0; i<1000; i++){
        arreglo[i] = 1;
    }
    for(i=2; i<1000; i++){
        for(j=3; j<1000; j++){
            multi = j % i;
            if(multi == 0){
                arreglo[j] = 0;
            }
        }
    }
    for(i=0; i<1000; i++){
        if(arreglo[i] == 1){
            fprintf(primo,"%d\n", i);
            //printf("%d\n", arreglo[i]);
        }
        printf("%d\n", arreglo[i]);
    }
    fclose(primo);
}