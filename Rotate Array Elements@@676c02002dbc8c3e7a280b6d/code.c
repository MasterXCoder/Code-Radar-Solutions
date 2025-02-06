#include <stdio.h>

int main() {
    int n,r;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i--){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &r);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}