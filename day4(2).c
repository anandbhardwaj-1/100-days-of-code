#include <stdio.h>

int main() {
    int n, sum;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    // Formula: sum = n*(n+1)/2
    sum = n * (n + 1) / 2;
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    
    return 0;
}
