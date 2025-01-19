#include <stdio.h>

int main() {
    const double PI = 3.14;
    double r, area;
    scanf("%lf",&r);
    area = PI * r * r;
    printf("Area: %.2lf", area);
    return 0;
}