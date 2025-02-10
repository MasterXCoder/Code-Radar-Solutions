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
    int t;
    scanf("%d",&t);
    int arr[t];
    while(t--){
        int num;
        scanf("%d", &arr[&num]);
    }
    whilt(t++){
        int z = arr[t];
        printf("%d\n", isPrime(num));
    }
    return 0;
}
