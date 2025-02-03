#include <stdio.h>

int main() {
    char s;
    scanf("%c", &s);
    if(s=='R'){
        printf("Stop");
    }
    else if(s=='G'){
        printf("Go");
    }
    else if(s=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}