/*Serie de ejercicios para el tercer parcial de Fundamentos de Programación
Nombre del alumno: Francisco Abimael Oro Estrada

6. El formato Netpbm permite guardar una imagen en formato ASCII. El formato del archivo 
lleva la siguiente estructura:
NÚMERO MÁGICO
# COMENTARIOS
ANCHO ALTO
MAXVAL
DATOS_DE_PIXELES
Donde NÚMERO MÁGICO corresponde a uno de los valores de la siguiente tabla:
ANCHO y ALTO corresponden a las dimensiones de la imagen, esto es, si se acomoda en un 
arreglo de dos dimensiones ANCHO corresponde a la primera y ALTO a la segunda.
# COMENTARIOS son datos adicionales que se le agregan a la imagen y este campo puede 
o no estar presente.
MAXVAL corresponde al valor máximo que pueden tomar cada uno de los pixeles.
DATOS_DE_PIXELES Lista de datos correspondientes a cada pixel. Si es una imagen a 
color basada en la combinación de los colores Rojo, Verde y Azul, (RGB) los datos se 
encuentran en grupos de tres, esto es:
ROJO
VERDE
AZUL
ROJO
VERDE
AZUL
Así hasta completar la cantidad de pixeles que tiene la imagen.
Dada la imagen lena.pnm, por medio del paso de argumentos al main se deberá generar 
una o todas las siguientes imágenes: 
* Tres matrices: Separar la imagen en tres archivos de extensión pnm, cada uno 
correspondiente a la misma imagen de cada uno de los colores de la paleta RGB : rojo.pnm, 
green.pnm y blue.pnm.
* Imagen en escala de grises: Para ello se utiliza un número mágico diferente al que se utiliza 
en la separación por colores. Para obtener la escala de grises se realiza el promedio de los 
tres valores de cada pixel.
*Imagen en blanco y negro a partir de un umbral solicitado. El número mágico también es 
diferente. Se calcula a partir de la imagen en grises el nivel de intensidad de cada pixel y se 
convierte en negro (pixel =0) o blanco (pixel=255) dependiendo si está por debajo o por 
encima de un umbral definido. Es decir, los pixeles cuya intensidad esté por debajo del 
umbral se convertirán en pixeles negros mientras el resto en pixeles blancos. El umbral será 
solicitado al usuario.
De manera general se deberá mostrar en pantalla la siguiente información por cada archivo 
generado.
* Número mágico
* Valores de ancho y alto
* Valor Máximo que pueden tomar cada pixel.
Las opciones para pasar por la línea de comandos son:
1 ->Matrices R, G y B.
2 ->Matriz R.
3 ->Matriz G.
4 ->Matriz B.
5 ->Imagen en escala de grises.
6 umbral -> Imagen en blanco y negro. Se deberá verificar que el umbral no pase de 255 
ni sea menor a 0.
7 umbral -> Todas las opciones.
Cada código para generar una imagen se deberá colocar en una función por separado. 
Entregar en archivos por separado cada función. El archivo donde se encuentre la 
función main deberá llamarse procesa.c
## VARIABLES DE ENTRADA 

## VARIABLES DE SALIDA
file(archivo): Almacena los números primos obtenidos
*/
#include <stdio.h>
#include <string.h>

void redScale(char *filename, char *outname){
    int j = 0, i, dim[2];
    char header[3];
    FILE *img, *out;
    img = fopen(filename,"r");
    out = fopen(outname,"w+");
    fscanf(img, "%s", header);
    fprintf(out, "%s\n", header); 
    for(i=0; i<2; i++){
        fscanf(img, "%d", &dim[i]);
    }
    fprintf(out, "%d %d\n", dim[0], dim[1]); 
    
    while(fscanf(img, "%d", &i) != EOF) {
        if(!j){
            fprintf(out, "%d\n", i);
            // j = 3;
            // continue;
        }
        // if(j == 3){
        fprintf(out, "%d\n\n\n", i);
            // j = 0;
        // }
        // j++;
    }
    fclose(img);
    fclose(out);
    printf("Magic number: %s \tDimensions: %d x %d \t Max Value = 255\n", header, dim[0], dim[1]);    
}

void blueScale(char *filename, char *outname){
    int j = 0, i, dim[2];
    char header[3]; 
    FILE *img, *out;
    img = fopen(filename,"r");
    out = fopen(outname,"w+");
    fscanf(img, "%s", header);
    fprintf(out, "%s\n", header); 
    for(i=0; i<2; i++){
        fscanf(img, "%d", &dim[i]);
    }
    fprintf(out, "%d %d\n", dim[0], dim[1]); 

    while(fscanf(img, "%d", &i) != EOF) {
        if(!j){
            fprintf(out, "%d\n", i);
        //     j = 1;
            fprintf(out, "\n\n");
            // continue;
        }
        // if(j == 3){
            fprintf(out, "%d\n\n\n", i);
            // j = 0;
        // }
        // j++;
    }
    fclose(img);
    fclose(out);
    printf("Magic number: %s \tDimensions: %d x %d \t Max Value = 255\n", header, dim[0], dim[1]);    
}

void greenScale(char *filename, FILE *outname){
    int j = 0, i, dim[2];
    char header[3]; 
    FILE *img, *out;
    img = fopen(filename,"r");
    out = fopen(outname,"w+");
    fscanf(img, "%s", header);
    fprintf(out, "%s\n", header); 
    for(i=0; i<2; i++){
        fscanf(img, "%d", &dim[i]);
    }
    fprintf(out, "%d %d\n", dim[0], dim[1]); 

    while(fscanf(img, "%d", &i) != EOF) {
        if(!j){
            fprintf(out, "%d\n", i);
        //     j = 2;
            fprintf(out,"\n"); 
            // continue;
        }
        // if(j == 3){
            fprintf(out, "%d\n\n\n", i);
        //     j = 0;
        // }
        // j++;
    }
    fclose(img);
    fclose(out);
    printf("Magic number: %s \tDimensions: %d x %d \t Max Value = 255\n", header, dim[0], dim[1]);    
}

int main(int argc, char **argv){
    int i;
    FILE *lena, *red, *green, *blue, *grayScale, *blackWhiteScale;
    // char *lena = "lena.pnm", *red = "lena_red.pnm", *green = "lena_green.pnm", *blue = "lena_blue.pnm", *grayScale = "grayScale.pnm", *blackWhiteScale = "blackWhiteScale.pnm";
    
    lena = fopen(argv[1], "r");
    red = fopen(argv[2], "w+");
    green = fopen(argv[3], "w+");
    blue = fopen(argv[4], "w+");
    grayScale = fopen(argv[5], "w+");
    blackWhiteScale = fopen(argv[6], "w+");
    redScale(lena, red);
    greenScale(lena, green);
    blueScale(lena, blue);
    return 0;
}