#include <stdio.h>

int main(){
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        s=arr[n/2]+arr[(n/2)-1];
        printf("%d",s/2);
    }
    else{
        s=arr[n/2];
        printf("%d",s);
    }
}