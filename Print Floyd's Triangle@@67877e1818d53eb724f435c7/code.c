#include <stdio.h>

int main() {
    int a,b;
    scanf("%d ", &a);
    for(int i=1; i<=a; i++){
        static b=0;
        for(int j=0; j<i; j++){
            printf("%d ",b+1);
        }
        printf("\n");
    }
    return 0;
}