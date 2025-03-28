#include <stdio.h>

int main(){
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<n; j++){
        if(arr[j]==b){
            c++;
        }
    }
    printf("%d",c);
}