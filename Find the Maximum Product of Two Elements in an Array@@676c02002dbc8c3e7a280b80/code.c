#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int t;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    } 
    bubbleSort(arr, n);
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(max<(arr[i]*arr[j]) and arr[i]!=arr[j]){
                max=arr[i]*arr[j];
            }
        }
    }
    printf("%d",max);
    return 0;
}