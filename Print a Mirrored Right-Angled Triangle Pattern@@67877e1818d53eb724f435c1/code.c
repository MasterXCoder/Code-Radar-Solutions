#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=a; i>0; i--){
        for(int j=(i); j>0; j--){
            printf(" ");
        }
        for(int k=0; k<(a-i+1); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}