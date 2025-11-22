#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int findFirst(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int first = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return first;
}
int findLast(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return last;
}
int main()
{
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    qsort(nums, n, sizeof(int), compare);
    printf("Enter the target value: ");
    scanf("%d", &target);
    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);
    printf("%d, %d\n", first, last);
    return 0;
}