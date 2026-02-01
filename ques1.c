#include <stdio.h>


void insertElement(int a[], int n, int pos, int x) {
    for (int i = n - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }
    a[pos] = x;
}

int main() {
    int n, pos, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter the array elements:\n");
    printf("(Array indexing starts from 0)\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the index at which to insert the element (0-based index): ");
    scanf("%d", &pos);

    printf("Enter the element to be added: ");
    scanf("%d", &x);

    insertElement(a, n, pos, x);

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
