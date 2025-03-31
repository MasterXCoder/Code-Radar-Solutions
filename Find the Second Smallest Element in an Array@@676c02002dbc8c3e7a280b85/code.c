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
    int n, c = 0, val = 0;
    scanf("%d", &n);
    int arr[n], res[n]; // Correctly declare res with size n

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Extract unique values
    for (int i = 0; i < n; i++) {
        val = 1;
        for (int j = 0; j < c; j++) { // Corrected loop for checking duplicates
            if (arr[i] == res[j]) {
                val = 0;
                break;
            }
        }
        if (val) {
            res[c] = arr[i];
            c++;
        }
    }

    if (c < 2) {
        printf("-1\n"); // Less than two unique values
        return 0;
    }

    bubbleSort(res, c);
    printf("%d\n", res[1]); // Second lowest unique value
    return 0;
}
