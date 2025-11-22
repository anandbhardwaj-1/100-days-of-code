#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long arr[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    long long left_sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long right_sum = total - left_sum - arr[i];
        if (left_sum == right_sum)
        {
            printf("%d\n", i);
            return 0;
        }
        left_sum += arr[i];
    }
    printf("-1\n");
    return 0;
}