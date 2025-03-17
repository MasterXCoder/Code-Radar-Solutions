#include <stdio.h>
int f=0,f1=0,f2=1;

int fibo(int n){
    if(n>0){
        printf("%d, ",f);
        f=f1+f2;
        f2=f1;
        f1=f;
        fibo(n-1);
    }
}