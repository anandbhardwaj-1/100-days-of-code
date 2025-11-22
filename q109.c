#include <stdio.h>
int main()
{
    int n, k;
    printf("no of element in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element in array: ");
        scanf("%d", &arr[i]);
    }
    printf("enter the value of integer k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid k\n");
        return 1;
    }
    int current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += arr[i];
    }
    int max_sum = current_sum;
    for (int i = k; i < n; i++)
    {
        current_sum = current_sum - arr[i - k] + arr[i];
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    printf("%d\n", max_sum);
    return 0;
}