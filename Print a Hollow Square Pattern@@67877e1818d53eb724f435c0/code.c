#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=a; i>0; i--){
        for(int j=a; j>0; j--){
            if(i==5|| j==5 || j==0 || i==0){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}