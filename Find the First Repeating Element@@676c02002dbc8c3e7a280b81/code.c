#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    static int count=0,val=0;
    for(int k=0; k<n; k++){
        if(count>1){
            val=k+1;
            break;
        }
        else{
            for(int j=k+1; j<n; j++){
                if(arr[k]==arr[j]){
                    count=count+1;
                }
            }
        }
        
    }
    printf("%d",arr[val]);   
}