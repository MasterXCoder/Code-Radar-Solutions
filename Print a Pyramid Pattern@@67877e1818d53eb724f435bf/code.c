#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<(a); i++){
        for(int j=a-1; j>0; j--){
            printf(" ");
        }
        for(int k=(3*i); k>0,k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}