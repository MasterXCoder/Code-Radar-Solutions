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