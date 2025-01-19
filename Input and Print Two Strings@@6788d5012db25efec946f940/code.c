#include <stdio.h>

int main() {
    char a[25];
    fget(a, 25, stdin);
    print("You entered: %s", a);
    return 0;
}