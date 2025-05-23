#include <stdio.h>

struct data {
    int id;
    char name[25];
    float salary;
};

float res(float salary){
    return salary < 50000 ? (0.1*salary):(0.05*salary);
}

int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", s[i].id, s[i].name, res(s[i].salary));
    }

    return 0;
}
