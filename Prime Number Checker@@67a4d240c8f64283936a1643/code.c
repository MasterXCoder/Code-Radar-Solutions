#include <stdio.h>

int isPrime(int a) {
    if (a <= 1) return 0;  // Numbers less than 2 are not prime
    int count = 0;         // Reset count to 0 each time the function is called
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    return (count == 2) ? 1 : 0; // A prime number has exactly two divisors
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
