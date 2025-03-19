#include <stdio.h>

struct data {
    char day[25];
    float temp;
};

int main() {
    int n = 7;
    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %f", &s[i].day, s[i].temp);
    }
    float sum=0;
    for (int i = 0; i < n; i++) {
        sum+=s[i].temp;
    }
    printf("Average Temperature: .2f",sum/n);
    return 0;
}
