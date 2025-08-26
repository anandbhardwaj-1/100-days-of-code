#include <stdio.h>
#include <math.h>   // for pow function

int main() {
    float p, r, t;   // principal, rate, time
    float SI, CI;

    // Taking input from user
    printf("Enter Principal amount : ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    // Formula for Simple Interest
    SI = (p * r * t) / 100;

    // Formula for Compound Interest
    CI = p * (pow((1 + r/100), t)) - p;

    // Printing results
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
