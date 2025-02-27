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
    float x,count;
    count=0;
    scanf("%f",&x);
    for(int i=0; i<n; i++){
        if(s[i].mark>x){
            count+=1;
        }
    }
    printf("Count of students scoring above %.2f: %d\n",x,count);
    return 0;
}