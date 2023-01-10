#include <stdio.h> 

int mean(int dataset[], int size){
    float sum= 0;
    float _mean;
    for(int i=0; i<size; i++){
        sum += dataset[i];
    }
    return sum / size;
}