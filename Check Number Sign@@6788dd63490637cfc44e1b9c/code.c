#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a>0){
        prinf("Positive");
    }
    else if(a==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}