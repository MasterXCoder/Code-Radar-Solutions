#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max = arr[i + 1]; // Assume next element is the greatest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j]; // Update max if a greater element is found
            }
        }
        arr[i] = max; // Replace current element with max found
    }
    arr[n - 1] = -1; // Last element should be -1
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    replaceWithGreatest(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
