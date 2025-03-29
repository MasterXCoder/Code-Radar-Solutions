#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", arr[i]);
    }
    int min=100, val1=0, val2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(abs(arr[i]-arr[j])<min && arr[i]!=arr[j]){
                min = abs(arr[i]-arr[j]);
                val1 = arr[i];
                val2 = arr[j];
            }
        }
    }
    printf("%d %d",val1,val2);
}