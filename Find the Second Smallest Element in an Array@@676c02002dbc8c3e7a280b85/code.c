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
    int n,c=0;
    scanf("%d", &n);
    int arr[n], res[c];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n-i-1; j++){
            if(arr[i]!=arr[j]){
                res[c]=arr[i];
            }
        }
        c++;
    }
    bubbleSort(res, c);
    int small=res[1];

    printf("%d",small);
    return 0;
}