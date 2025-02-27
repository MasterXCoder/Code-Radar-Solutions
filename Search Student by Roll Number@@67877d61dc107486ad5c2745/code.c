#include <stdio.h>

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
    for(int i=0; i<n; i++){
        if(s[i].roll==check){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",s[i].roll,s[i].name,s[i].mark);
        r = 1;
        }
    }
    if(r==0){
        printf("Student not found");
    }
    return 0;
}