#include <stdio.h>

int sort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n],dup[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        dup[i] = arr[i];
    }
    sort(arr,n);
    int asc=0, des=0;
    for(int k=0; k<n; k++){
        if(dup[k]==arr[k]){
            asc+=1;
        }
        else if(dup[k]==arr[n-k-1]){
            des+=1;
        }
    }
    if(asc==n || des==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
}