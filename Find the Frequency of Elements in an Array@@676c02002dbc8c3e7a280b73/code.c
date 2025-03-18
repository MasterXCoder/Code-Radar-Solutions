#include <stdio.h>

int main(){
    int n,val;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        val = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                val++;
            }
        }
        printf("%d %d",arr[i],val);
    }
    return 0;
}