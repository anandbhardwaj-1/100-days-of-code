#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
 

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0) {
        quotient = (float)num1 / num2;   // typecasting for decimal result
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (Division by zero not allowed)\n");
    }
return 0;
}
