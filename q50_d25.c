#include <stdio.h>

int main() {
    int limit, i, j, k, l;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Ramanujan numbers up to %d are:\n", limit);

    for (i = 1; i <= limit; i++) {
        int count = 0;
        for (j = 1; j*j*j < i; j++) {
            for (k = j; k*k*k < i; k++) {
                if (j*j*j + k*k*k == i) {
                    count++;
                }
            }
        }
        if (count >= 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}