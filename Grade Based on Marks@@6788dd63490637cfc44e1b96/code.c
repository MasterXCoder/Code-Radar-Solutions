#include <stdio.h>

int main() {
    int a;
    char s;
    scanf("%d",&a);
    s = (a>=90)? 'A':
        (a>=80)? 'B':
        (a>=70)? 'C':
        (a>=60)? 'D':'F';
        //Terinary operator
    printf("%c",s);
    return 0;
}