#include <stdio.h>
int findHCF(int a, int b) {
    if (b == 0)
        return a;
    else
        return findHCF(b, a % b);
}
int main() {
    int num1, num2, hcf, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    hcf = findHCF(num1, num2);
    lcm = (num1 * num2) / hcf;
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}