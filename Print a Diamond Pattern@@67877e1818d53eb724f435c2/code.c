#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        for(int j=(2*i+1); j>0; j--){
            printf("*");
        }
        printf("\n");
        for(int k=0; k<(2*i+1); k++){
            printf("*");
        }
    }
    return 0;
}