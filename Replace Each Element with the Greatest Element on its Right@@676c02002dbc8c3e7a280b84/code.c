#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int res=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        for(int k=max; k>i; k--){
            printf("%d ",max);
        }
        i=2;
    }
    printf("-1");
}