#include <stdio.h>
#include <stdlib.h>

// Bubble Sort to sort the array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    int minDiff = abs(arr[1] - arr[0]);
    int val1 = arr[0], val2 = arr[1];

    // Find the pair with the minimum difference
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            val1 = arr[i];
            val2 = arr[i + 1];
        }
    }

    printf("%d %d", val1, val2);
    return 0;
}
