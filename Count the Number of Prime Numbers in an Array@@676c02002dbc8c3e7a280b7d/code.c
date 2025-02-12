#include <stdio.h>
static int res = 0;
int isPrime(int arr[]) {
    int count = 0;
    for(int k=0; k<n; k++){
        for (int i = 1; i <= arr[i]; i++) {
            if (arr[i] % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            res+=1;
        } else {
            res+=0;
        }
    }

}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    isPrime(arr, n);
    printf("%d",res);
}