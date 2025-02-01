
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)  
        return 1;  
    else
        return n * factorial(n - 1);  
}

int main() {
    int n; 
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact = factorial(n);
        printf("Factorial of %d is %d\n", n, fact);
    }

    return 0;
}
