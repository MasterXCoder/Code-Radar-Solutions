#include <stdio.h>

int main() {
    int a;
    scanf("%d ", &a);
    for(int i=1; i<=a; i++){
        if(i%2==0){
            for(int j=0; j<i; j++){
                if(j%2==0){
                    printf("%d ",0);
                }
                else{
                    printf("%d ",1);
                }
            } 
        }
        else{
            for(int j=0; j<i; j++){
                if(j%2==0){
                    printf("%d ",1);
                }
                else{
                    printf("%d ",0);
                }
            }             
        }
        printf("\n");
    }
    return 0;
}