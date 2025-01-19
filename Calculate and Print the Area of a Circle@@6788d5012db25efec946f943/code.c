#include <stdio.h>

int main() {
    const PI = 3.14;
    float r, area;
    scanf("%f",&r);
    area = PI * r * r;
    printf("Area: %.2f", area);
    return 0;
}