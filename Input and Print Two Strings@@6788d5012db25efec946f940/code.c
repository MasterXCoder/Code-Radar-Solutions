#include <stdio.h>

int main() {
    char a[25];
    fgets(a, 25, stdin);
    print("You entered: %s", a);
    return 0;
}