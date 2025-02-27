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
    scanf("%d",&check);
    if(s[check]){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",s[check].roll,s[check].name,s[check].mark);
    }
    else{
        printf("Student not found");
    }
    return 0;
}