#include <stdio.h>
#include <stdlib.h> 

void sort(int arr[], int size){
    int i, j, a;
    for(i=0; i < size; i++){
        for(j=0; j < size; j++){
            if(arr[i] < arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}



int median(int dataset[], int size){
    int mid = size / 2;
    sort(dataset, size); 
    for(int i=0; i < size; i++) {
        printf("%d ", dataset[i]);
    }
    if(sizeof(dataset)/sizeof(dataset[0])%2) return dataset[mid + 1];
    return ((dataset[mid] + dataset[mid + 1]) / 2);
}
