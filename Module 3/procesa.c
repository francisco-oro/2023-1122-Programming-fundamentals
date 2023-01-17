#include <stdio.h>

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
        if(j < 4) {
            fprintf(out, "%d\n\n", i);
            j = 4;
            continue;
        }
        fprintf(out, "%d\n\n\n", i);
    }
    fclose(img);
    fclose(out);    
}

int main(int argc, char **argv){
     int i;
    // FILE *lena, *red, *green, *blue, *grayScale, *blackWhiteScale;
    char *lena = "lena.pnm", *red = "lena_red.pnm", *green = "lena_green.pnm", *blue = "lena_blue.pnm", *grayScale = "grayScale.pnm", *blackWhiteScale = "blackWhiteScale.pnm";

    // lena = fopen(argv[1], "r");
    // red = fopen(argv[2], "w+");
    // green = fopen(argv[3], "w+");
    // blue = fopen(argv[4], "w+");
    // grayScale = fopen(argv[5], "w+");
    // blackWhiteScale = fopen(argv[6], "w+");
    
    redScale(lena, red);
    fclose(lena);
    fclose(red);
    

    return 0;
}