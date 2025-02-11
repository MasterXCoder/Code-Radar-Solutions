#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(a>0){
            break;
        }
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                a=1;
                break;
            }
            else{
                a=0;
            }
        }
    }
    if(a>0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}