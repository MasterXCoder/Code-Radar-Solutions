#include <stdio.h>

int main() {
    int a, b;
    char res[100];
    scanf("%d %d", &a, &b);
    res = (a>b)? "Profit":
          ((a==b)? "No Profit No Loss":"Loss");
    printf("%s", res);
    return 0;
}