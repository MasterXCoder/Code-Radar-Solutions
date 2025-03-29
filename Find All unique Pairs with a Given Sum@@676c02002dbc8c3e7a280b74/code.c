#include <stdio.h>

int main(){
    int n,r;
    scanf("%d",&n);
    int arr[n];
    for(int k=0; k<n; k++){
        scanf("%d", &arr[k]);
    }
    scanf("%d", &r);
    int val=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==r && arr[i]>=arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}