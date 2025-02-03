#include <stdio.h>

int main() {
    float a, b;
    char s;
    scanf("%f %f %c", &a, &b, &s);
    if(s=='+'){
        printf("%.0f", a+b);
    }
    else if(s=='-'){
        printf("%.0f", a-b);
    }
    else if(s=='*'){
        printf("%.0f", a*b);
    }
    else if(s=='/'){
        printf("%.0f",a/b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}