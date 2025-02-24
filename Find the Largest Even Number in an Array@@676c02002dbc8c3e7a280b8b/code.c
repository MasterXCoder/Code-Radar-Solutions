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
    scanf("%d", &n);
    int arr[n];
    int r=1;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    } 
    bubbleSort(arr,n);
    for(int i=(n-1); i>=0; i--){
        if(arr[i]%2==0){
            printf("%d",arr[i]);
            r=0;
            break;
        }
    }
    if(r==1){
        printf("%d",-1);
    }
    return 0;
}   
