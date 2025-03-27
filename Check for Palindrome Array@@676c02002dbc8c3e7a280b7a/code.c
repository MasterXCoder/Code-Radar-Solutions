#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int s=0,val=0;
    for(int i=n; i>0; i--){
        s=s*10+arr[i];
    }

    printf("%d",s);
}