#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    
    int nums[10000];  
    printf("Enter %d space-separated integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    if(n == 0) {
        printf("Output: \n");
        return 0;
    }
    
    
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }
   
    while(j < n) {
        nums[j++] = 0;
    }
    
    printf("Output: ");
    for(int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if(i < n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
