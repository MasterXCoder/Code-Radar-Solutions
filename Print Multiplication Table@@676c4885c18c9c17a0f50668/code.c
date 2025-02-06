#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=1; i<(a+1); i++){
        printf("2 X %d = %d",i, 2*i);
    }
    return 0;
}