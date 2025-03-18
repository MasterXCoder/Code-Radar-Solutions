#include <stdio.h>

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
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>0 & (arr[i]+j!=arr[j])){
                printf("%d",arr[i]+j);
                return 0;
            }
        }
    }
}