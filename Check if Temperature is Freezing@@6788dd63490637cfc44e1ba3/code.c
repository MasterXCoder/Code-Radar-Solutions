#include <stdio.h>

int main() {
    int z;
    scanf("%d", &z);
    if(z<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}