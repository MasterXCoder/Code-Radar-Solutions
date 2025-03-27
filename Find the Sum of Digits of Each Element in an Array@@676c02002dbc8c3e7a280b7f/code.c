#include <stdio.h>

int res(int a){
    int x=0;
    while(a){
        x=x+a%10;
        a=a/10;
    }
    return x;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++){
        printf("%d ",res(arr[j]));
    }
}