#include <stdio.h>

int isPrime(int a) {
    static int count = 0;
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
        printf("%d", isPrime(num));
    }
    return 0;
}