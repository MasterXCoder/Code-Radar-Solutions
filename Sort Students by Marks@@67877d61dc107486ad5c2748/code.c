#include <stdio.h>

void bubbleSort(int s[], int n) {
    int t;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (s[j].mark > s[j+1].mark) {
                t = s[j].mark;
                s[j].mark = s[j+1].mark;
                s[j+1].mark = t;
            }
        }
    }
}

int main(){
    struct data{
        int roll;
        char name[25];
        float mark;
    };
    int n;
    scanf("%d",&n);
    struct data s[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s[i].roll,&s[i].name,&s[i].mark);
    }
    int check;
    int r = 0; 
    scanf("%d",&check);
    bubbleSort(s[], n);
    for(int i=0; i<n; i++){
        printf("%d %s %f",&s[i].roll,&s[i].name,&s[i].mark);
    }
    return 0;
}