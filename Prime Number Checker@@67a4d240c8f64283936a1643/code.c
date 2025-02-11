#include <stdio.h>

int isPrime(int a) {
    int count = 0; 
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < t; i++) {
        printf("%d\n", isPrime(arr[i]));
    }

    return 0;
}
