#include <stdio.h>
int main() {
    int num, digit, product = 1, hasOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Product of odd digits is: 0\n");
        return 0;
    }
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits is: %d\n", product);
    else
        printf("No odd digits found. Product is: 0\n");
    return 0;
}