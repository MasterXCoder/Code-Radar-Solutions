#include <stdio.h>

int isPrime(int a) {
    int count = 0;  // Reset count to 0 each time the function is called
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
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
