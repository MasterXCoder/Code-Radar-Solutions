#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int t;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int smallest = 1; // Start from 1
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (arr[i] == smallest) {
                smallest++; // Keep incrementing if it matches
            } else if (arr[i] > smallest) {
                break; // Break on finding a gap
            }
        }
    }

    printf("%d\n", smallest);
    return 0;
}
