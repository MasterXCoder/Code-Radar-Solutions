#include <stdio.h>

int main(){
    int a,b,n;
    n=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    for(int i=0; i<a; i++){
        if(arr[i]==b){
            printf("%d", i);
            n=1;
            break;
        }
    }
    if(n==0){
        printf("%d", -1);
    }
    return 0;
}
