#include <stdio.h>
int main() {
    int n;
    long long product = 1;  
    int hasEven = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }
    if (hasEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the range 1 to %d\n", n);
    return 0;
}