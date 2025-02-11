#include <stdio.h>

int isPrime(int a) {
    int count = 0; 
    for(int i=1; i<=a; i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a,t;
    scanf("%d",&t);
    a=t;
    int arr[a];
    while(t--){
        int num;
        int a=0;
        scanf("%d", &arr[a]);
        a++;
    }
    t=a;
    while(t--){
        int z = arr[a-t];
        printf("%d\n", isPrime(z));
    }
    return 0;
}