#include <stdio.h>


int main() {
    int a;
    char s[15];
    scanf("%d", &a);
    s = (a>=18)? "Eligible" : "Not Eligible";
    printf("%s", s);
    return 0;
}