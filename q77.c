#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int diag[r < c ? r : c];
    int k = 0;
    for (int i = 0; i < r && i < c; i++)
    {
        diag[k++] = mat[i][i];
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (diag[i] == diag[j])
            {
                printf("False\n");
                return 0;
            }
        }
    }
    printf("True\n");
    return 0;
}