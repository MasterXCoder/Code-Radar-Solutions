#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }

    int maxFrequency = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFrequency) {
            maxFrequency = count;
            max = arr[i];
        }
    }

    printf("%d\n", max);
    return 0;
}
