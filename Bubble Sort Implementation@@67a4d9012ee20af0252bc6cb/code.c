#include <stdio.h>

void bubbleSort(arr, n){
    int t;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j+1]){
                t=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=t;
            }
        }
}}

int printArray(arr, n){
    for(int i=0; i<n; i++){
        printf("%d", &arr[i]);
    }
}
