#include <stdio.h>

struct data {
    int roll;
    char name[25];
    float mark;
};

void bubbleSort(struct data s[], int n) {
    struct data t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].mark > s[j + 1].mark) {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].mark);
    }

    bubbleSort(s, n);
    int count = 0;
    for (int i = n; i >=0; i--) {
       if(s[i].mark>50){
            count++;
       }
    }
    if(count == n){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    return 0;
}
