#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter the elements of the array (between 0 to %d except one):\n", n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,tsum=0;
    for(i=0;i<n;i++)
    {
        tsum+=i;
    }
    for(i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    int missing=tsum-sum;
    printf("The missing number is: %d\n",missing);
    return 0;
}