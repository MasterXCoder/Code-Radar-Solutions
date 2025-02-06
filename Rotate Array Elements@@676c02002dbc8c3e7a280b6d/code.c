#include <stdio.h>

int main() {
    int n,r;
    int arr[n];
    scanf("%d", &n);
    printf("\n");
    for(int i=0; i<n; i--){
        scanf("%d", &arr[i]);
    }
    printf("%d ", arr[0]);
    return 0;
}