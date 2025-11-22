#include <stdio.h>
#define MAXN 100000
int main()
{
    int n, k;
    printf("no of element in array: ");
    scanf("%d", &n);
    int arr[MAXN];
    for (int i = 0; i < n; i++)
    {
        printf("enter element in array: ");
        scanf("%d", &arr[i]);
    }
    printf("enter the value integer k: ");
    scanf("%d", &k);
    if (k > n || k <= 0)
    {
        printf("Invalid k\n");
        return 1;
    }
    int deq[MAXN];
    int front = 0, rear = -1;
    for (int i = 0; i < n; i++)
    {
        while (front <= rear && arr[deq[rear]] <= arr[i])
        {
            rear--;
        }
        deq[++rear] = i;
        if (deq[front] == i - k)
        {
            front++;
        }
        if (i >= k - 1)
        {
            printf("%d ", arr[deq[front]]);
        }
    }
    printf("\n");
    return 0;
}