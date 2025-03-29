#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int found = 0; // Flag to check if any pairs were found

    // Check all possible pairs using brute force
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == -1) continue; // Skip already used elements
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == -1) continue; // Skip already used elements
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                arr[i] = arr[j] = -1; // Mark as used
                found = 1;
                break; // Prevent further duplicates with the same pair
            }
        }
    }

    if (!found) {
        printf("No pairs found\n");
    }
    
    return 0;
}
