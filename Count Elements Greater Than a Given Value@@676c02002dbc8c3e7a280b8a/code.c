#include <stdio.h>

int main(){
    int n,val,count=0;
    scanf("%d %d", &n, &val);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0; k<n; k++){
        if(arr[k]>val){
            count+=1;
        }
    }
    printf("%d", count);
}