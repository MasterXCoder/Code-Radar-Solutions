#include <stdio.h>
#define bits sizeof(int)*8;
int main(){
    int a,b,c;
    scanf("%d %d",&a, &b);
    c = 1<<(bits-b);
    if(b&a){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
}