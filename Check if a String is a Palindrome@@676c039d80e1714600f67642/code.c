#include <stdhio.h>
#include <string.h>

int main(){
    char a[30];
    scanf("%s",a);
    char r[30]=a;
    if(r==strrev(a)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}