#include <stdio.h>

int main() {
    int a, b;
    char s;
    scanf("%d %d %c", &a, &b, &s);
    if(s=='+'){
        printf("%d", a+b);
    }
    else if(s=='-'){
        printf("%d", a-b);
    }
    else if(s=='*'){
        printf("%d", a*b);
    }
    else if(s=='/'){
        printf("%d",a/b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}