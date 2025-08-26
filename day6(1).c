#include <stdio.h>

int main() {
    int num;

    // asking the user for input
    printf("Enter an integer : ");
    scanf("%d", &num);

    // checking even or odd
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    }
    else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
