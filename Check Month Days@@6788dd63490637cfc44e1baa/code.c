#include <stdio.h>

int main() {
    int d[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a;
    scanf("%d", &a);
    if(a>=1 && a<=12){
        printf("%d\n", d[a-1]);
    }
    else{
        printf("Invalid month");
    }
    return 0;
}