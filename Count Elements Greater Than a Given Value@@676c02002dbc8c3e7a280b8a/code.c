#include <stdio.h>

int main(){
    int n,k,arr[n],count=0;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0; k<n; k++){
        if(arr[i]>k){
            count+=1;
        }
    }
    printf("%d", count);
}