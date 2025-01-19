#include <stdio.h>
#include <ctype.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("Hexadecimal: toupper(%x)\n", a);
    printf("Octal: %o", a);
    return 0;
}