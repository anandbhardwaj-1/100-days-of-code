#include <stdio.h>
void printBinary(int num) {
    if (num > 1)
    printBinary(num / 2);
    printf("%d", num % 2);     
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Binary representation: ");
    printBinary(number);
    printf("\n");

    return 0;
}