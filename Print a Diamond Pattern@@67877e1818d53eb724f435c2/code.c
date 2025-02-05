#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        for(int s=(a-i-1); s>0; s--){
            printf(" ");
        }
        for(int j=(2*i+1); j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=a; i>0; i-=2){
        for(int s=(a-i); s>0; s--){
            printf(" ");
        }
        for(int k=(i); k>0; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}