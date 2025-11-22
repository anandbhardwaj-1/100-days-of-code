#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    long long prefix[n + 1];
    prefix[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    long long suffix[n + 1];
    suffix[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        long long prod = prefix[i] * suffix[i + 1];
        printf("%lld", prod);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}