#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    last = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    if (digits == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    int middle = num % (int)pow(10, digits);
    middle /= 10;
    int swapped = last * (int)pow(10, digits) + middle * 10 + first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}