#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>c && b>c && a+b>c){
        printf("Valid");
    }
    else if(b>a && c>a && b+c>a){
        printf("Valid");
    }
    else if(c>b && a>b && a+c>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}