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
    int n,c;
    c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr,n);
    int r[n];
    int t=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=c; j++){
            if(r[c]==arr[i]+c){
                c++;
            }
            else{
                r[t]=c;
                t++;
                c=0;
                break;
            }
        }
    }
    bubbleSort(r,c);
    for(int i=0; i<c; i++){
        printf("%d", r[i]);
    }
    return 0;
}

