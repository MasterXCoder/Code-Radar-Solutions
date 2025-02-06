#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    for(int i=0; i<(a); i++){
        for(int j=(a-i); j>1; j--){
            printf(" ");
        }
        for(int k=1; k<(i+1); k++){
            printf("%d", k);
        }
        for(int l=(i+1); l>0; l--){
            printf("%d", l)
        }
        printf("\n");
    }
    return 0;
}