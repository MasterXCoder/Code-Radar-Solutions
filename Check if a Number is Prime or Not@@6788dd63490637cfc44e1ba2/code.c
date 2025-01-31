#include <stdio.h>

int main() {
    int a;
    static int count=0;
    scanf("%d",&a);
    for(int i=1a; i<=a; i++){
        count++;
    }
    if(a>0 && count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}