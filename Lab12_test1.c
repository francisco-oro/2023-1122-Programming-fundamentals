#include <stdio.h> 

int main(void){
    FILE *file;
    int res; 
    file = fopen("myfile.txt", "r");
    if(file == NULL){
        printf("Error\n");

    } else {
        printf("Success\n"); 
        res = fclose(file);
        printf("%d\n", res); 
    }
    return 0;
}