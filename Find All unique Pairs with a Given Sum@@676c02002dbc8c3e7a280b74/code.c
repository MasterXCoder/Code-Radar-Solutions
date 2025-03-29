#include <stdio.h>

int main(){
    int n,r;
    scanf("%d",&n);
    int arr[n];
    for(int k=0; k<n; k++){
        scanf("%d", &arr[k]);
    }
    scanf("%d", &r);
    int val=arr[i]+arr[j];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(val==r && arr[i]>arr[j]){
                printf("%d %d\n",arr[i],arr[j])
            }
        }
    }
}