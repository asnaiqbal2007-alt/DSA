#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    
    printf("F(2) = %d\n", fib(2));  
    printf("F(3) = %d\n", fib(3));    
    printf("F(4) = %d\n", fib(4));  
    
    return 0;
}
