#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int s=0,val=0;
    for(int i=0; i<n; i++){
        s=s*10+arr[i];
    }
    int t=s;
    while(s){
        val=val*10+s%10;
        s=s/10;
    }
    printf("%s %d", val==t? "YES":"NO",t);
}