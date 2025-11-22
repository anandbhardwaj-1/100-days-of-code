#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int k = 0; k < m + n - 1; k++)
    {
        if (k % 2 == 0)
        {
            int i = (k < m) ? k : m - 1;
            int j = k - i;
            while (i >= 0 && j < n)
            {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            int j = (k < n) ? k : n - 1;
            int i = k - j;
            while (j >= 0 && i < m)
            {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }
    return 0;
}