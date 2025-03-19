#include <stdio.h>

struct data {
    int roll;
    char name[25];
    float mark;
};

char res(float mark){
    mark>=85? 'A':mark>=70? 'B':'C';
}

int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].mark);
    }

    for (int i = n; i >=0; i--) {
        printf("Roll Number: %d, Name: %s, MArks: %.2f\n", s[i].roll, s[i].name, res(s[i].mark));
    }

    return 0;
}
