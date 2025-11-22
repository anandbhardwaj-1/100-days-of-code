#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of number in array: ");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the no in array: ");
        scanf("%d", &nums[i]);
    }
    int candidate = -1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        printf("%d\n", candidate);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}