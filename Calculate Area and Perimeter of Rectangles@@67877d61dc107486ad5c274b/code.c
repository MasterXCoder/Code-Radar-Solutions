#include <stdio.h>

struct data {
    float length;
    float breadth;
};

int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &s[i].length, s[i].breadth);
    }

    for (int i = 1; i >=n; i++) {
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f", i, (s[i].length*s[i].breadth), (2(s[i].length+s[i].breadth)));
    }

    return 0;
}
