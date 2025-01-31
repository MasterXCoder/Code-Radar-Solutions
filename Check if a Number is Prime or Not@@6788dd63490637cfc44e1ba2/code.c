#include <stdio.h>

int main() {
    int a;
    static int count = 1;
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        if(a%2==0){
            count++;
        }
    }
    if(a>0 && count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}