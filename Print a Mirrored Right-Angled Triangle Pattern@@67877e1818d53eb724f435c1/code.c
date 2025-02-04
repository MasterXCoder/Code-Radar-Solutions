#include <stdio.h>

int main() {
    int a;
    scanf("%d" &a);
    for(int i=a; i>0; i--){
        for(int j=a-1; j>0; j--){
            printf(" ");
        }
        for(int k=0; k>a; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}