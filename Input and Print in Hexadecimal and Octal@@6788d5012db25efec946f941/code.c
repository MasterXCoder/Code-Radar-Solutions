#include <stdio.h>
#include <ctype.h>
int main() {
    int a,b;
    scanf("%d", &a);
    printf("Hexadecimal: %X\n", toupper(a));
    printf("Octal: %o", a);
    return 0;
}