#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        for(int j=(2*i+1); j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=a; i>1; i--){
        for(int k=(a); k>0; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}