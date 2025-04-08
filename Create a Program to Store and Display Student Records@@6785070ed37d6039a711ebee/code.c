#include <stdio.h>

struct prog{
    int roll;
    char name[25];
    float mark;
};

int main(){

    int n;
    scanf("%d",&n);
    struct prog s[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f", &s[i].roll, &s[i].name, &s[i].mark);
    }
    for(int i=0; i<n; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].mark);
    }
}