#include <stdio.h>

int main() {
    int a,b;
    b=0;
    scanf("%d ", &a);
    for(int i=1; i<=a; i++){
        for(int j=0; j<i; j++){
            b++;
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}