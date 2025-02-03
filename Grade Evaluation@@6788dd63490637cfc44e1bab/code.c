#include <stdio.h>

int main() {
    char a[]={'A','B','C','D','F'};
    char s;
    scanf("%c",&s);
    if(s==a[0]){
        printf("Excellent");
    }
    else if(s==a[1]){
        printf("Good");
    }
    else if(s==a[2]){
        printf("Average");
    }
    else if(s==a[3]){
        printf("Below Average");
    }
    else if(s==a[4]){
        printf("Fail");
    }
    return 0;
}