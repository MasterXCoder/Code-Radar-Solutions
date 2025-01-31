#include <stdio.h>

int main() {
    int a;
    static int count;
    scanf("%d",&a);
    for(int i=a, i>0, i--){
        count+=1
    }
    if(count>2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}