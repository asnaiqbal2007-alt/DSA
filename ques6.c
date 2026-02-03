#include <stdio.h>

int missingNum(int arr[], int n) {
    long long total = (long long)(n + 1) * (n + 2) / 2;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (int)(total - sum);
}

int main() {
    int n;
    int arr[1000];

    printf("Enter number of elements (n-1): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Missing number is: %d\n", missingNum(arr, n));
    return 0;
}
