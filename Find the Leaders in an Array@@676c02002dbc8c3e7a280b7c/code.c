#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for leaders using a nested loop
    for (int i = 0; i < n; i++) {
        int isLeader = 1; // Assume current element is a leader
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isLeader = 0; // Not a leader if a greater element is found
                break;
            }
        }
        if (isLeader) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
