#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    
    int arr[100000];  
    printf("Enter %d space-separated integers (sorted array): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(n == 0) {
        printf("\\n");
        return 0;
    }
    
    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    int unique_count = j + 1;
    
    printf("Unique elements: ");
    for(int i = 0; i < unique_count; i++) {
        printf("%d", arr[i]);
        if(i < unique_count - 1) printf(" ");
    }
    printf("\\n");
    return 0;
}
