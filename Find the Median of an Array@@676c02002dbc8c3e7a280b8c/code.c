#include <stdio.h>

int main(){
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    if(n%2==0){
        s=arr[n/2]+arr[(n/2)+1];
    }
    else{
        s=arr[n/2];
    }
    printf("%d",s);
}