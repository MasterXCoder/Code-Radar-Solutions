#include <stdio.h>

int main() {
    int n,r;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &r);
    if(r>0){
        for(int i = -r; i < 0; i++) {
            printf("%d\n", arr[i]);
        }
        for(int i = 0; i <= r; i++){
            printf("%d\n", arr[i]);
        }

    }
    
    return 0;
}