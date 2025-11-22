#include <stdio.h>
int find_ceil(int arr[], int n, int x)
{
   int left = 0, right = n - 1;
   int result = -1;
   while (left <= right)
   {
      int mid = left + (right - left) / 2;
      if (arr[mid] >= x)
      {
         result = mid;
         right = mid - 1;
      }
      else
      {
         left = mid + 1;
      }
   }
   return result;
}
int main()
{
   int n;
   printf("enter the size of array: ");
   scanf("%d", &n);
   int arr[100000];
   for (int i = 0; i < n; i++)
   {
printf("enter eleent of array: ");
      scanf("%d", &arr[i]);
   }
   int x;
printf("enter value of x: ");
   scanf("%d", &x);
   int index = find_ceil(arr, n, x);
   printf("%d\n", index);
   return 0;
}