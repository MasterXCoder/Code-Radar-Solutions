#include <stdio.h>

int main() {
    char a[15], b[15];
    int c;
    scanf("%s %d", &a, &c);
    scanf("%s", &b);
    printf("Name: %s\n", a);
    printf("Age: %d\n", c);
    printf("Hobby: %s", b);
    return 0;
}