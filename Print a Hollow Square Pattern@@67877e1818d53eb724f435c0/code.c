#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=a; i>0; i--){
        for(int j=a; j>0; j--){
            if(i==a||j==a||j==1||i==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}