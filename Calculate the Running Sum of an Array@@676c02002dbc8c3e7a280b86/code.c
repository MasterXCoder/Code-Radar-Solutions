#include <stdio.h>

int main(){
    int n,arr[n];
    static int count=0;
    scanf("%d", &n);
    for(int k=0; k<n; k++){
        scanf("%d", &arr[k]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",count+=arr[i]);
    }
}