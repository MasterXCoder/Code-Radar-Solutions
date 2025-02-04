#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<(2a-1); i++){
        for(int j=(2*i+1); j>(2*i+2); j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}