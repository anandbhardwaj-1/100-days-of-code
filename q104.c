#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long discriminant = (long long)n * n + n;
    if (discriminant % 2 != 0)
    {
        printf("-1\n");
        return 0;
    }
    long long half = discriminant / 2;
    long long x = (long long)sqrt(half);
    if (x * x == half && x >= 1 && x <= n)
    {
        long long sum_left = x * (x + 1) / 2;
        long long sum_right = (long long)n * (n + 1) / 2 - (x - 1) * x / 2;
        if (sum_left == sum_right)
        {
            printf("%lld\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}