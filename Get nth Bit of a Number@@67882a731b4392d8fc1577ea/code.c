#include <stdio.h>
#define BITS sizeof(int)*8;
int main(){
    int a,b,c;
    scanf("%d %d",&a, &b);
    c = 1<<(BITS-b);
    if(a&c){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
}