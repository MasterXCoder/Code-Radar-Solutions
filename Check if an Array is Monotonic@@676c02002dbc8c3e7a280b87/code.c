#include <stdio.h>

int sort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}