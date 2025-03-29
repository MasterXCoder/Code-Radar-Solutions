#include <stdio.h>

int checker(int num){
    int t=num,s=0;
    while(num){
        s=s*10+num%10;
        num=num/10;
    }
    return (t==s)?1:0;
}

int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        count+=checker(arr[i]);
    }
    printf("%d",count);
}