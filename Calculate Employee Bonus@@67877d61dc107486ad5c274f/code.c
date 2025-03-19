#include <stdio.h>

struct data {
    int id;
    char name[25];
    float salary;
};

char res(float salary){
    salary<=5000? ((0.1*salry)+salary):((0.05*salry)+salary);
}

int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].salary);
    }

    for (int i = n; i >=0; i--) {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", s[i].id, s[i].name, res(s[i].salary));
    }

    return 0;
}
