#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    if(a>0){
    for(int i=0; i<n; i++){
        if(arr[i]==b){
            printf("%d", i);
            break;
        }
    }
    }
    else{
        printf("%d", -1)
    };
    return 0;
}
