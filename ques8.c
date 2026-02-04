#include <stdio.h>

int removeElement(int nums[], int size, int val) {
    int i = 0;

    while (i < size) {
        if (nums[i] == val) {
            nums[i] = nums[size - 1]; 
            size--;                   
        } else {
            i++;
        }
    }
    return size; 
}

int main() {
    int n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int k = removeElement(nums, n, val);

    printf("k = %d\n", k);
    printf("Array after removal (first k elements):\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
