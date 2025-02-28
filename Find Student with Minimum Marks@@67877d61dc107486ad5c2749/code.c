#include <stdio.h>

int main(){
    struct prog{
        int roll;
        char name[25];
        float mark;
    };
    int n;
    scanf("%d",&n);
    struct prog s[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f", &s[i].roll, &s[i].name, &s[i].mark);
    }
int btm = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].mark < s[btm].mark) {
            btm = i;
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", s[btm].roll, s[btm].name, s[btm].mark);

    return 0;

}