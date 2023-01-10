#include <stdio.h>
#include <stdlib.h>

void sort2(int arr[], int size){
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

int mode(int dataset[], int size){
    float previousVal, _mode;
    int i = 0, highestCount, count = 0; 
    sort2(dataset, size);
    previousVal = dataset[0];
    for(i = 0; i < size; i++) {
        count++; 
        if(previousVal != dataset[i]) {
            if(count > highestCount){
                count--;
                highestCount = count;
                _mode = previousVal;
            }
            count = 1;
        }
        previousVal = dataset[i];
    }
    if(count > highestCount) _mode = previousVal;
    return _mode;
}
