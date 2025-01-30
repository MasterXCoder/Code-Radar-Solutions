#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    if(a%b==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}